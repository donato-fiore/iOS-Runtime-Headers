// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFLTASKSTATECOLLECTINGMETRICS_H
#define PFLTASKSTATECOLLECTINGMETRICS_H

@class NSURL, NSArray;
@protocol PFLTaskState;

#import <Foundation/Foundation.h>


@interface PFLTaskStateCollectingMetrics : NSObject <PFLTaskState>



@property (readonly, nonatomic) NSURL *compiledModelURL; // ivar: _compiledModelURL
@property (readonly, nonatomic) NSArray *trainingIndicies; // ivar: _trainingIndicies
@property (readonly, nonatomic) NSArray *validationIndicies; // ivar: _validationIndicies


+(BOOL)supportsSecureCoding;
-(NSUInteger)tag;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCompiledModelURL:(id)arg0 validationDataIndicies:(id)arg1 trainingDataIndicies:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resume:(id)arg0 completion:(id)arg1 ;
-(void)suspend;


@end


#endif