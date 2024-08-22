// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLFEATUREVALIDATOR_H
#define APODMLFEATUREVALIDATOR_H


#import <Foundation/Foundation.h>


@interface APOdmlFeatureValidator : NSObject



-(id)imputeFeature:(id)arg0 ;
-(id)imputeMissingFeatures:(id)arg0 ;
-(id)missingFeatures:(id)arg0 inputDescriptions:(id)arg1 ;
-(id)validateFeatureProvider:(id)arg0 inputDescriptions:(id)arg1 ;
-(id)validateFeatures:(id)arg0 predictionModel:(id)arg1 ;
-(void)reportMissingFeatureError:(id)arg0 ;


@end


#endif