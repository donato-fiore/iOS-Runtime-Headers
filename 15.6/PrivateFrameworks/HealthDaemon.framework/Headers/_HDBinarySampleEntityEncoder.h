// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDBINARYSAMPLEENTITYENCODER_H
#define _HDBINARYSAMPLEENTITYENCODER_H



#import "HDEntityEncoder.h"

@interface _HDBinarySampleEntityEncoder : HDEntityEncoder



-(BOOL)applyPropertiesToObject:(id)arg0 persistentID:(NSInteger)arg1 row:(struct HDSQLiteRow *)arg2 error:(*id)arg3 ;
-(id)codableRepresentationForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)objectForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)orderedProperties;


@end


#endif