// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFPROPORTIONALINTEGRALCONTROLLER_H
#define PFPROPORTIONALINTEGRALCONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PFProportionalIntegralController : NSObject

@property NSInteger integralError; // ivar: _integralError
@property NSInteger integralErrorMax; // ivar: _integralErrorMax
@property NSInteger integralErrorMin; // ivar: _integralErrorMin
@property CGFloat integralGain; // ivar: _integralGain
@property NSInteger output; // ivar: _output
@property NSInteger outputMax; // ivar: _outputMax
@property NSInteger outputMin; // ivar: _outputMin
@property BOOL outputReady; // ivar: _outputReady
@property CGFloat proportionalGain; // ivar: _proportionalGain
@property NSInteger setPoint; // ivar: _setPoint
@property (retain) NSMutableArray *statistics; // ivar: _statistics


-(id)initWithSetPoint:(NSInteger)arg0 ;
-(void)addStatisticsSampleForTimestamp:(CGFloat)arg0 error:(NSInteger)arg1 feedback:(NSInteger)arg2 ;
-(void)enumerateStatisticsMeasurementsWithHandler:(id)arg0 ;
-(void)updateWithTimestamp:(CGFloat)arg0 error:(NSInteger)arg1 feedback:(NSInteger)arg2 ;


@end


#endif