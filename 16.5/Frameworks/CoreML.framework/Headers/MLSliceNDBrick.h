// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLSLICENDBRICK_H
#define MLSLICENDBRICK_H

@class NSArray, NSString;
@protocol EspressoBrick;

#import <Foundation/Foundation.h>


@interface MLSliceNDBrick : NSObject <EspressoBrick>



@property (readonly, nonatomic) NSArray *begin_ids; // ivar: _begin_ids
@property (readonly, nonatomic) NSArray *begin_masks; // ivar: _begin_masks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *end_ids; // ivar: _end_ids
@property (readonly, nonatomic) NSArray *end_masks; // ivar: _end_masks
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *inputRanks; // ivar: _inputRanks
@property (readonly, nonatomic) NSArray *inputShapes; // ivar: _inputShapes
@property (readonly, nonatomic) NSArray *outputRanks; // ivar: _outputRanks
@property (readonly, nonatomic) NSArray *outputShapes; // ivar: _outputShapes
@property (readonly, nonatomic) int rank; // ivar: _rank
@property (readonly, nonatomic) BOOL shapeInfoNeeded; // ivar: _shapeInfoNeeded
@property (readonly, nonatomic) NSArray *strides; // ivar: _strides
@property (readonly) Class superclass;


-(BOOL)hasGPUSupport;
-(id)initWithParameters:(id)arg0 ;
-(id)setupForInputShapes:(id)arg0 withParameters:(id)arg1 ;
-(void)computeOnCPUWithInputTensors:(id)arg0 outputTensors:(id)arg1 ;


@end


#endif