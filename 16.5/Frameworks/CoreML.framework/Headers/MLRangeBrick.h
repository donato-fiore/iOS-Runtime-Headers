// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLRANGEBRICK_H
#define MLRANGEBRICK_H

@class NSString;
@protocol EspressoBrick;

#import <Foundation/Foundation.h>


@interface MLRangeBrick : NSObject <EspressoBrick>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float endValueParameter; // ivar: _endValueParameter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int size; // ivar: _size
@property (readonly, nonatomic) float start; // ivar: _start
@property (readonly, nonatomic) float startValueParameter; // ivar: _startValueParameter
@property (readonly, nonatomic) float stepSize; // ivar: _stepSize
@property (readonly, nonatomic) float stepSizeValueParameter; // ivar: _stepSizeValueParameter
@property (readonly) Class superclass;


-(BOOL)hasDynamicOutputShape:(NSUInteger)arg0 ;
-(BOOL)hasGPUSupport;
-(id)computeDynamicOutputShape:(id)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(id)setupForInputShapes:(id)arg0 withParameters:(id)arg1 ;
-(void)computeOnCPUWithInputTensors:(id)arg0 outputTensors:(id)arg1 ;


@end


#endif