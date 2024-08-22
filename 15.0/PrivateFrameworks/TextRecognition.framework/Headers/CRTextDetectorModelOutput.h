// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTEXTDETECTORMODELOUTPUT_H
#define CRTEXTDETECTORMODELOUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CRTextDetectorModelOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *f_score_act_sigmoid_output; // ivar: _f_score_act_sigmoid_output
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *geometry_output; // ivar: _geometry_output


-(id)featureValueForName:(id)arg0 ;
-(id)initWithF_score_act_sigmoid_output:(id)arg0 geometry_output:(id)arg1 ;


@end


#endif