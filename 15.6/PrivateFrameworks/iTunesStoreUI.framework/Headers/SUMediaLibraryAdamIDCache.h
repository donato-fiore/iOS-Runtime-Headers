// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUMEDIALIBRARYADAMIDCACHE_H
#define SUMEDIALIBRARYADAMIDCACHE_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUMediaLibraryAdamIDCache : NSObject {
    NSMutableSet *_adamIDs;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _isPopulated;
}




+(id)sharedCache;
-(id)init;
-(void)_libraryChangedNotification:(id)arg0 ;
-(void)_populateCache;
-(void)dealloc;
-(void)getContainsAdamID:(id)arg0 completionBlock:(id)arg1 ;
-(void)getIntersectionWithSet:(id)arg0 completionBlock:(id)arg1 ;
-(void)getProperties:(id)arg0 ofAdamIDs:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)populateCache;


@end


#endif