// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLEFILTERRULE_H
#define TSTTABLEFILTERRULE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTFormulaPredicate.h"

@interface TSTTableFilterRule : NSObject <NSCopying>



@property (nonatomic) BOOL doesNotNeedFormulaRewriteForImport; // ivar: _doesNotNeedFormulaRewriteForImport
@property (retain, nonatomic) TSTFormulaPredicate *predicate; // ivar: _predicate


+(id)getPredArgDataFromCell:(id)arg0 ;
+(id)ruleWhereValuesInTable:(id)arg0 inBaseColumn:(struct TSUModelColumnIndex )arg1 matchCell:(id)arg2 ;
+(id)ruleWithFormulaPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUniquesOrDuplicates;
-(BOOL)matchesCell:(id)arg0 ;
-(BOOL)matchesRow:(unsigned int)arg0 withFormulaTableUID:(struct TSKUIDStruct *)arg1 withCalculationEngine:(id)arg2 ;
-(BOOL)needsFormulaRewriteForImport;
-(BOOL)needsThreshold;
-(NSUInteger)hash;
-(id)copyByRewritingToGeometricFormWithTableInfo:(id)arg0 containsBadRef:(*BOOL)arg1 ;
-(id)copyByRewritingToUidFormWithTableInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formula;
-(id)initFromArchive:(*void)arg0 ;
-(id)initFromPrePivotArchive:(*void)arg0 ;
-(id)initRuleWhereValuesInTable:(id)arg0 andDataList:(id)arg1 inBaseColumn:(struct TSUModelColumnIndex )arg2 matchCell:(id)arg3 ;
-(id)initWithFormulaPredicate:(id)arg0 ;
-(struct TSUModelColumnIndex )baseColumnIndexForFilterRuleInTableModel:(id)arg0 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)encodeToPrePivotArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif