// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITEGENERICTABLE_H
#define CKSQLITEGENERICTABLE_H



#import "CKSQLiteTable.h"

@interface CKSQLiteGenericTable : CKSQLiteTable



+(Class)entryClass;
+(Class)genericTableClassForTOCTableEntry:(id)arg0 ;
+(id)genericTableForTOCEntry:(id)arg0 ;
+(id)uniqueSubclassClassNameForClassName:(id)arg0 ;
+(id)valueForProperty:(id)arg0 inObject:(id)arg1 ;
+(void)setValue:(id)arg0 forProperty:(id)arg1 inObject:(id)arg2 ;
-(id)valueForProperty:(id)arg0 inObject:(id)arg1 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 inObject:(id)arg2 ;


@end


#endif