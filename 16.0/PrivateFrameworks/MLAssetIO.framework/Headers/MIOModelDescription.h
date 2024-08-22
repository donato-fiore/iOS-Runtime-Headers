// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIOMODELDESCRIPTION_H
#define MIOMODELDESCRIPTION_H

@class NSArray, NSDictionary, NSString;
@protocol NSMutableCopying;

#import <Foundation/Foundation.h>


@interface MIOModelDescription : NSObject <NSMutableCopying>

 {
    ModelDescription _modelDescriptionParams;
}


@property (readonly, copy, nonatomic) NSArray *classLabels; // ivar: _classLabels
@property (readonly, copy, nonatomic) NSArray *inputDescriptions;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSArray *outputDescriptions;
@property (readonly, copy, nonatomic) NSDictionary *parameterDescriptionsByKey; // ivar: _parameterDescriptionsByKey
@property (readonly, copy, nonatomic) NSString *predictedFeatureName;
@property (readonly, copy, nonatomic) NSString *predictedProbabilitiesName;
@property (readonly, copy, nonatomic) NSArray *trainingInputDescriptions;
@property (readonly, nonatomic) BOOL updatable; // ivar: _updatable


-(*void)modelDescriptionSpecification;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSpecification:(*void)arg0 isUpdatable:(BOOL)arg1 modelParameters:(id)arg2 classLabels:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_setShortDescription:(id)arg0 forInputFeatureWithName:(id)arg1 ;
-(void)_setShortDescription:(id)arg0 forOutputFeatureWithName:(id)arg1 ;
-(void)_setShortDescription:(id)arg0 forTrainingInputFeatureWithName:(id)arg1 ;


@end


#endif