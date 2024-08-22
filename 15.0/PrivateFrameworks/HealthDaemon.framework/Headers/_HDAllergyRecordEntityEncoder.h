// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDALLERGYRECORDENTITYENCODER_H
#define _HDALLERGYRECORDENTITYENCODER_H

@class HDMedicalRecordEntityEncoder;



@interface _HDAllergyRecordEntityEncoder : HDMedicalRecordEntityEncoder



-(BOOL)applyPropertiesToObject:(id)arg0 persistentID:(NSInteger)arg1 row:(struct HDSQLiteRow *)arg2 error:(*id)arg3 ;
-(id)codableRepresentationForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)createBareObject;
-(id)orderedProperties;


@end


#endif