// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FACERECOGNIZABILITYFILTERSVMOUTPUT_H
#define FACERECOGNIZABILITYFILTERSVMOUTPUT_H

@class NSDictionary, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface FaceRecognizabilityFilterSVMOutput : NSObject <MLFeatureProvider>



@property (nonatomic) NSInteger classLabel; // ivar: _classLabel
@property (retain, nonatomic) NSDictionary *classProbability; // ivar: _classProbability
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithClassLabel:(NSInteger)arg0 classProbability:(id)arg1 ;


@end


#endif