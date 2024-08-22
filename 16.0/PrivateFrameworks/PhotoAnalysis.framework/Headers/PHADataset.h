// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHADATASET_H
#define PHADATASET_H

@class NSString, NSArray;
@protocol ETDataProvider;

#import <Foundation/Foundation.h>


@interface PHADataset : NSObject <ETDataProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *inputName; // ivar: _inputName
@property (readonly, nonatomic) NSString *labelName; // ivar: _labelName
@property (readonly, nonatomic) NSArray *labeledDataSamples; // ivar: _labeledDataSamples
@property (readonly) Class superclass;


-(NSUInteger)numberOfDataPoints;
-(id)dataPointAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithLabeledFeatureVectors:(id)arg0 inputName:(id)arg1 labelName:(id)arg2 ;


@end


#endif