// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PADVNFACEPOSEMODELOUTPUT_H
#define PADVNFACEPOSEMODELOUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface PADVNFacePoseModelOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *pred_facepose; // ivar: _pred_facepose
@property (retain, nonatomic) MLMultiArray *softmax_expression; // ivar: _softmax_expression
@property (retain, nonatomic) MLMultiArray *softmax_eye; // ivar: _softmax_eye
@property (retain, nonatomic) MLMultiArray *softmax_pose; // ivar: _softmax_pose
@property (retain, nonatomic) MLMultiArray *softmax_smile; // ivar: _softmax_smile


-(id)featureValueForName:(id)arg0 ;
-(id)initWithSoftmax_expression:(id)arg0 softmax_smile:(id)arg1 softmax_pose:(id)arg2 softmax_eye:(id)arg3 pred_facepose:(id)arg4 ;


@end


#endif