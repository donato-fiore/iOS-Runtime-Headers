// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDIAGNOSTICTESTRESULTENTITY_H
#define HDDIAGNOSTICTESTRESULTENTITY_H



#import "HDMedicalRecordEntity.h"

@interface HDDiagnosticTestResultEntity : HDMedicalRecordEntity



+(BOOL)addCodableObject:(id)arg0 toCollection:(id)arg1 ;
+(BOOL)isConcreteEntity;
+(id)codableObjectsFromObjectCollection:(id)arg0 ;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif