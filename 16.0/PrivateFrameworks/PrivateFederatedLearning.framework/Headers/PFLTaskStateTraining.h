// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFLTASKSTATETRAINING_H
#define PFLTASKSTATETRAINING_H

@class NSURL, NSDictionary, NSNumber, NSArray;
@protocol PFLTaskState;

#import <Foundation/Foundation.h>

#import "PFLModelHandler.h"

@interface PFLTaskStateTraining : NSObject <PFLTaskState>



@property (readonly, nonatomic) NSURL *compiledModelURL; // ivar: _compiledModelURL
@property (readonly, nonatomic) NSDictionary *metrics; // ivar: _metrics
@property (readonly, nonatomic) PFLModelHandler *modelHandler; // ivar: _modelHandler
@property (readonly, nonatomic) NSNumber *numValidationSamples; // ivar: _numValidationSamples
@property (readonly, nonatomic) NSArray *trainingIndicies; // ivar: _trainingIndicies


+(BOOL)supportsSecureCoding;
-(NSUInteger)tag;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCompiledModelURL:(id)arg0 modelHandler:(id)arg1 trainingDataIndicies:(id)arg2 metrics:(id)arg3 numValidationSamples:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resume:(id)arg0 completion:(id)arg1 ;
-(void)suspend;


@end


#endif