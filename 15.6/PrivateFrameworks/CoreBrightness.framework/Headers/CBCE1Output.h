// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBCE1OUTPUT_H
#define CBCE1OUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CBCE1Output : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *CBCE1_Q0_output; // ivar: _CBCE1_Q0_output
@property (retain, nonatomic) MLMultiArray *CBCE1_Q1_output; // ivar: _CBCE1_Q1_output
@property (retain, nonatomic) MLMultiArray *CBCE1_Q2_output; // ivar: _CBCE1_Q2_output
@property (retain, nonatomic) MLMultiArray *CBCE1_Q3_output; // ivar: _CBCE1_Q3_output
@property (retain, nonatomic) MLMultiArray *CBCE1_Q4_output; // ivar: _CBCE1_Q4_output
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *strength_output; // ivar: _strength_output
@property (retain, nonatomic) MLMultiArray *uncertainty; // ivar: _uncertainty


-(id)featureValueForName:(id)arg0 ;
-(id)initWithCBCE1_Q0_output:(id)arg0 CBCE1_Q1_output:(id)arg1 CBCE1_Q2_output:(id)arg2 CBCE1_Q3_output:(id)arg3 CBCE1_Q4_output:(id)arg4 strength_output:(id)arg5 uncertainty:(id)arg6 ;


@end


#endif