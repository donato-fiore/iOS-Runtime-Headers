// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLVNDETECTIONPRINTCUSTOMMODEL_H
#define _MLVNDETECTIONPRINTCUSTOMMODEL_H

@class NSDictionary;
@protocol MLCustomModel;

#import <Foundation/Foundation.h>

#import "MLModelConfiguration.h"
#import "MLModelDescription.h"

@interface _MLVNDetectionPrintCustomModel : NSObject <MLCustomModel>



@property (readonly, nonatomic) MLModelConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSUInteger detectionPrintRequestRevision; // ivar: _detectionPrintRequestRevision
@property (readonly, nonatomic) NSDictionary *expectedOutputShapeV1; // ivar: _expectedOutputShapeV1
@property (readonly, nonatomic) MLModelDescription *modelDescription; // ivar: _modelDescription


-(id)featureValueFromDetectionPrint:(id)arg0 featureName:(id)arg1 ;
-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif