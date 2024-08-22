// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDUSERDOMAINCONCEPTENCODER_H
#define _HDUSERDOMAINCONCEPTENCODER_H



#import "HDEntityEncoder.h"

@interface _HDUserDomainConceptEncoder : HDEntityEncoder



-(BOOL)applyPropertiesToObject:(id)arg0 persistentID:(NSInteger)arg1 row:(struct HDSQLiteRow *)arg2 error:(*id)arg3 ;
-(id)codableRepresentationForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)createBareObjectWithRow:(struct HDSQLiteRow *)arg0 ;
-(id)orderedProperties;


@end


#endif