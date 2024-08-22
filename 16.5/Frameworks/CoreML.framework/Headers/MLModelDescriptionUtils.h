// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLMODELDESCRIPTIONUTILS_H
#define MLMODELDESCRIPTIONUTILS_H


#import <Foundation/Foundation.h>


@interface MLModelDescriptionUtils : NSObject



+(*void)createFeatureTypeFromFeatureDescription:(id)arg0 error:(*id)arg1 ;
+(*void)createMetaData:(id)arg0 ;
+(*void)createModelDescription:(id)arg0 error:(*id)arg1 ;
+(*void)getArrayFeatureTypeFromConstraint:(id)arg0 ;
+(*void)getDictionaryFeatureTypeFromConstraint:(id)arg0 error:(*id)arg1 ;
+(*void)getImageFeatureTypeFromConstraint:(id)arg0 ;
+(*void)getSequenceFeatureTypeFromConstraint:(id)arg0 error:(*id)arg1 ;
+(BOOL)saveModelDescription:(id)arg0 toSpecification:(*void)arg1 error:(*id)arg2 ;
+(BOOL)validateAllFeatureDescriptions:(id)arg0 hasAnyFeatureTypeIn:(id)arg1 minimalCount:(NSUInteger)arg2 maximumCount:(NSUInteger)arg3 debugLabel:(id)arg4 error:(*id)arg5 ;
+(void)copyFeatureDescriptionFrom:(id)arg0 to:(*void)arg1 error:(*id)arg2 ;


@end


#endif