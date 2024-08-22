// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDSPOTLIGHTCONTACTRESOLVER_H
#define _CDSPOTLIGHTCONTACTRESOLVER_H

@class _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _CDSpotlightContactResolver : NSObject {
    _PASLock *_cachedContactsForHandle;
    NSObject<OS_dispatch_queue> *_cacheInvalidationTimerQueue;
    NSObject<OS_dispatch_source> *_cacheInvalidationTimer;
}




+(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg0 ;
+(id)sharedInstance;
-(id)_getCachedContactForHandle:(id)arg0 ;
-(id)init;
-(void)_purge;
-(void)_setContact:(id)arg0 forHandle:(id)arg1 ;
-(void)_validateCache;


@end


#endif