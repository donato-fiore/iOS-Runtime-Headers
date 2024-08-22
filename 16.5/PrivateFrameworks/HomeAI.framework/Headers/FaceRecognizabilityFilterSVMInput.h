// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FACERECOGNIZABILITYFILTERSVMINPUT_H
#define FACERECOGNIZABILITYFILTERSVMINPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface FaceRecognizabilityFilterSVMInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *input; // ivar: _input


-(id)featureValueForName:(id)arg0 ;
-(id)initWithInput:(id)arg0 ;


@end


#endif