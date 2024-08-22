// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBCE2OUTPUT_H
#define CBCE2OUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CBCE2Output : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *CBCE2_Q0_output; // ivar: _CBCE2_Q0_output
@property (retain, nonatomic) MLMultiArray *CBCE2_Q1_output; // ivar: _CBCE2_Q1_output
@property (retain, nonatomic) MLMultiArray *CBCE2_Q2_output; // ivar: _CBCE2_Q2_output
@property (retain, nonatomic) MLMultiArray *CBCE2_Q3_output; // ivar: _CBCE2_Q3_output
@property (retain, nonatomic) MLMultiArray *CBCE2_Q4_output; // ivar: _CBCE2_Q4_output
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *strength_output; // ivar: _strength_output
@property (retain, nonatomic) MLMultiArray *uncertainty; // ivar: _uncertainty


-(id)featureValueForName:(id)arg0 ;
-(id)initWithCBCE2_Q0_output:(id)arg0 CBCE2_Q1_output:(id)arg1 CBCE2_Q2_output:(id)arg2 CBCE2_Q3_output:(id)arg3 CBCE2_Q4_output:(id)arg4 strength_output:(id)arg5 uncertainty:(id)arg6 ;


@end


#endif