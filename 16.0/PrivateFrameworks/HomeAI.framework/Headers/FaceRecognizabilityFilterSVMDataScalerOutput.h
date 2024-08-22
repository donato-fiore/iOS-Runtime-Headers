// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FACERECOGNIZABILITYFILTERSVMDATASCALEROUTPUT_H
#define FACERECOGNIZABILITYFILTERSVMDATASCALEROUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface FaceRecognizabilityFilterSVMDataScalerOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *transformed_features; // ivar: _transformed_features


-(id)featureValueForName:(id)arg0 ;
-(id)initWithTransformed_features:(id)arg0 ;


@end


#endif