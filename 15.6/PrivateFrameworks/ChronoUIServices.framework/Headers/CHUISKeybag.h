// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHUISKEYBAG_H
#define CHUISKEYBAG_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHUISKeybag : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    *_MKBEvent _mkbRegistrationToken;
    BOOL _queue_isEffectivelyLocked;
}




+(id)sharedInstance;
-(BOOL)_queue_isEffectivelyLocked;
-(BOOL)isEffectivelyLocked;
-(id)init;
-(void)_queue_handleKeybagStatusChanged;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif