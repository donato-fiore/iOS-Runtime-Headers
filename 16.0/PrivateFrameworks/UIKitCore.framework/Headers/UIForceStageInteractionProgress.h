// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFORCESTAGEINTERACTIONPROGRESS_H
#define UIFORCESTAGEINTERACTIONPROGRESS_H

@class NSObservation, NSString;
@protocol NSObservable, NSObserver;


#import "UIInteractionProgress.h"

@interface UIForceStageInteractionProgress : UIInteractionProgress <NSObservable, NSObserver>

 {
    NSObservation *_observation;
    BOOL _completed;
    BOOL _started;
}


@property (nonatomic) BOOL completesAtTargetState; // ivar: _completesAtTargetState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_reset;
-(void)dealloc;
-(void)receiveObservedValue:(id)arg0 ;


@end


#endif