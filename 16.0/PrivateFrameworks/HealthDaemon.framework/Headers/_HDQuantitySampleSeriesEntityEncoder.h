// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDQUANTITYSAMPLESERIESENTITYENCODER_H
#define _HDQUANTITYSAMPLESERIESENTITYENCODER_H



#import "HDEntityEncoder.h"

@interface _HDQuantitySampleSeriesEntityEncoder : HDEntityEncoder



-(BOOL)applyPropertiesToObject:(id)arg0 persistentID:(NSInteger)arg1 row:(struct HDSQLiteRow *)arg2 error:(*id)arg3 ;
-(BOOL)generateCodableRepresentationsForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 maxBytesPerRepresentation:(NSInteger)arg2 error:(*id)arg3 handler:(id)arg4 ;
-(id)codableRepresentationForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)objectForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)orderedProperties;


@end


#endif