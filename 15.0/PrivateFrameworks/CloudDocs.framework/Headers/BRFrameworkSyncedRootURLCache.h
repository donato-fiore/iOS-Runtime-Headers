// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRFRAMEWORKSYNCEDROOTURLCACHE_H
#define BRFRAMEWORKSYNCEDROOTURLCACHE_H

@class NSArray, NSString;
@protocol BRSyncedRootURLCache, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache>

 {
    int _syncedLocationsChangedNotificationToken;
    NSArray *_syncedRootURLs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_personaID;
    BOOL _usingOtherPersona;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *syncedRootURLs;


-(BOOL)_checkIfPersonaStillValid;
-(id)initWithPersona:(id)arg0 ;
-(void)_accountWillChange;
-(void)_fetchSyncedRootURLs;
-(void)dealloc;
-(void)registerForSyncedLocationsChangesNotifications;


@end


#endif