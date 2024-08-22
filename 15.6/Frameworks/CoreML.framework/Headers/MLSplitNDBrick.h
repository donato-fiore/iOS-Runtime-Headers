// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLSPLITNDBRICK_H
#define MLSPLITNDBRICK_H

@class NSNumber, NSString, NSArray;
@protocol EspressoBrick;

#import <Foundation/Foundation.h>


@interface MLSplitNDBrick : NSObject <EspressoBrick>



@property (readonly, nonatomic) NSNumber *axis; // ivar: _axis
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *inputRanks; // ivar: _inputRanks
@property (readonly, nonatomic) NSArray *inputShapes; // ivar: _inputShapes
@property (readonly, nonatomic) NSNumber *numSplits; // ivar: _numSplits
@property (readonly, nonatomic) NSArray *outputRanks; // ivar: _outputRanks
@property (readonly, nonatomic) NSArray *outputShapes; // ivar: _outputShapes
@property (readonly, nonatomic) BOOL shapeInfoNeeded; // ivar: _shapeInfoNeeded
@property (readonly, nonatomic) NSArray *splitSizes; // ivar: _splitSizes
@property (readonly) Class superclass;


-(BOOL)hasGPUSupport;
-(id)initWithParameters:(id)arg0 ;
-(id)setupForInputShapes:(id)arg0 withParameters:(id)arg1 ;
-(void)computeOnCPUWithInputTensors:(id)arg0 outputTensors:(id)arg1 ;


@end


#endif