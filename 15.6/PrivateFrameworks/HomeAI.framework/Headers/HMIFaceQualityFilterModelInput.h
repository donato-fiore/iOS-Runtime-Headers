// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIFACEQUALITYFILTERMODELINPUT_H
#define HMIFACEQUALITYFILTERMODELINPUT_H

@class NSSet, MLMultiArray, NSString;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface HMIFaceQualityFilterModelInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *input; // ivar: _input
@property (readonly) NSString *inputName; // ivar: _inputName


-(id)featureValueForName:(id)arg0 ;
-(id)initWithInput:(id)arg0 inputName:(id)arg1 ;


@end


#endif