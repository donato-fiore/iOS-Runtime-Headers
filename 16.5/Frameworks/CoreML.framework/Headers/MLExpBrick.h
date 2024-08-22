// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLEXPBRICK_H
#define MLEXPBRICK_H

@class NSString, NSArray;
@protocol EspressoBrick;

#import <Foundation/Foundation.h>


@interface MLExpBrick : NSObject <EspressoBrick>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *inputRanks; // ivar: _inputRanks
@property (readonly, nonatomic) NSArray *inputShapes; // ivar: _inputShapes
@property (readonly, nonatomic) NSArray *outputRanks; // ivar: _outputRanks
@property (readonly, nonatomic) NSArray *outputShapes; // ivar: _outputShapes
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL withBase2; // ivar: _withBase2


-(BOOL)hasGPUSupport;
-(id)initWithParameters:(id)arg0 ;
-(id)setupForInputShapes:(id)arg0 withParameters:(id)arg1 ;
-(void)computeOnCPUWithInputTensors:(id)arg0 outputTensors:(id)arg1 ;


@end


#endif