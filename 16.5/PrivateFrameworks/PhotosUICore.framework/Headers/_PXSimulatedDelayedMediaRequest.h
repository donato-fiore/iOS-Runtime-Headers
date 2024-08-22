// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSIMULATEDDELAYEDMEDIAREQUEST_H
#define _PXSIMULATEDDELAYEDMEDIAREQUEST_H

@class PXSimulatedMediaRequest, NSDictionary;



@interface _PXSimulatedDelayedMediaRequest : PXSimulatedMediaRequest {
    CGFloat _delay;
    CGFloat _delayFraction;
    BOOL _didScheduleFinalCallback;
    CGFloat _originalProgress;
    id *_lastOriginalResult;
    NSDictionary *_lastOriginalInfo;
}




-(CGFloat)_simulatedProgressForProgress:(CGFloat)arg0 ;
-(id)initWithWrappedMediaRequest:(id)arg0 delay:(CGFloat)arg1 ;
-(void)_handleDelayFraction:(CGFloat)arg0 ;
-(void)_produceFinalCallback;
-(void)handleOriginalProgress:(CGFloat)arg0 error:(id)arg1 stop:(*BOOL)arg2 info:(id)arg3 ;
-(void)handleOriginalResult:(id)arg0 info:(id)arg1 ;


@end


#endif