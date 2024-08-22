// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISCREENTIMEMANAGER_H
#define SEARCHUISCREENTIMEMANAGER_H

@class NSCache, DMFApplicationPolicyMonitor;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SearchUIScreenTimeManager : NSObject

@property (retain) NSCache *definitelyCorrectCache; // ivar: _definitelyCorrectCache
@property (retain) DMFApplicationPolicyMonitor *monitor; // ivar: _monitor
@property (retain) NSCache *possiblyCorrectCache; // ivar: _possiblyCorrectCache
@property (retain) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


+(id)sharedInstance;
-(BOOL)bundleIdIsScreenTimeBlocked:(id)arg0 completion:(id)arg1 ;
-(BOOL)cachedScreenTimeValueForBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)getScreenTimeBlockedForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)purgeCache;


@end


#endif