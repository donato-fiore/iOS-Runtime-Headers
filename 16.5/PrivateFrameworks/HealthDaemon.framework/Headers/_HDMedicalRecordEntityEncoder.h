// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDMEDICALRECORDENTITYENCODER_H
#define _HDMEDICALRECORDENTITYENCODER_H



#import "HDEntityEncoder.h"

@interface _HDMedicalRecordEntityEncoder : HDEntityEncoder {
    BOOL _skipApplyingConceptIndex;
}




-(BOOL)applyPropertiesToObject:(id)arg0 persistentID:(NSInteger)arg1 row:(struct HDSQLiteRow *)arg2 error:(*id)arg3 ;
-(id)codableRepresentationForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)createBareObjectWithRow:(struct HDSQLiteRow *)arg0 ;
-(id)initWithHealthEntityClass:(Class)arg0 profile:(id)arg1 transaction:(id)arg2 purpose:(NSInteger)arg3 encodingOptions:(id)arg4 authorizationFilter:(id)arg5 ;
-(id)objectForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)orderedProperties;


@end


#endif