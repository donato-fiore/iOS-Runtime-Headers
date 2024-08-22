// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFKEYVALUEOBSERVER_H
#define AFKEYVALUEOBSERVER_H

@class NSString;
@protocol AFKeyValueObserving;

#import <Foundation/Foundation.h>

#import "AFOneArgumentSafetyBlock.h"
#import "AFKeyValueObservingDeliveryOptions.h"

@interface AFKeyValueObserver : NSObject <AFKeyValueObserving>

 {
    uint8_t _isInvalid;
    AFOneArgumentSafetyBlock *_invalidation;
    id *_handler;
    AFKeyValueObservingDeliveryOptions *_deliveryOptions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(id)initWithObject:(id)arg0 keyPath:(id)arg1 handler:(id)arg2 deliveryOptions:(unk)arg3  ;
-(void)_handleObservedChangeWithOldValue:(id)arg0 andNewValue:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif