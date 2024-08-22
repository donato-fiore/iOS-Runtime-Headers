// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDMEDICATIONUSERDOMAINCONCEPTENTITYENCODER_H
#define _HDMEDICATIONUSERDOMAINCONCEPTENTITYENCODER_H

@class HDEntityEncoder;



@interface _HDMedicationUserDomainConceptEntityEncoder : HDEntityEncoder



-(BOOL)applyPropertiesToObject:(id)arg0 persistentID:(NSInteger)arg1 row:(struct HDSQLiteRow *)arg2 error:(*id)arg3 ;
-(id)createBareObjectWithRow:(struct HDSQLiteRow *)arg0 ;
-(id)orderedProperties;


@end


#endif