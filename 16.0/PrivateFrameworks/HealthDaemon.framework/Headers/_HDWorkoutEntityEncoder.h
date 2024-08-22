// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDWORKOUTENTITYENCODER_H
#define _HDWORKOUTENTITYENCODER_H



#import "HDEntityEncoder.h"
#import "HDSQLiteStatement.h"

@interface _HDWorkoutEntityEncoder : HDEntityEncoder {
    HDSQLiteStatement *_workoutEntryLookupStatement;
    BOOL _includeCondenserInfo;
}




+(NSInteger)estimatedEncodedSize;
-(BOOL)applyPropertiesToObject:(id)arg0 persistentID:(NSInteger)arg1 row:(struct HDSQLiteRow *)arg2 error:(*id)arg3 ;
-(id)codableRepresentationForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)createBareObjectWithRow:(struct HDSQLiteRow *)arg0 ;
-(id)initWithHealthEntityClass:(Class)arg0 profile:(id)arg1 transaction:(id)arg2 purpose:(NSInteger)arg3 encodingOptions:(id)arg4 authorizationFilter:(id)arg5 ;
-(id)orderedProperties;


@end


#endif