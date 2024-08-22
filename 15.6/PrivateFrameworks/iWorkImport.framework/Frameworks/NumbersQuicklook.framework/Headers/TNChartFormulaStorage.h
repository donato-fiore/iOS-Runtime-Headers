// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNCHARTFORMULASTORAGE_H
#define TNCHARTFORMULASTORAGE_H

@class NSMutableDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TNChartFormulaStorage : NSObject <NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_storage;
    int _direction;
    NSUInteger _cachedNumberOfGroups;
    BOOL _cachedNumberOfGroupsValid;
}


@property (readonly, nonatomic) NSUInteger categoryLabelFormulaType;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) NSUInteger numberOfDataFormulas;
@property (readonly, nonatomic) int scheme; // ivar: _scheme
@property (readonly, nonatomic) NSUInteger seriesLabelFormulaType;


+(NSUInteger)maxGroupLabelFormulas;
+(NSUInteger)maxLabeledGroupsForScheme:(int)arg0 ;
+(int)defaultScheme;
+(struct vector<TNChartFormulaType, std::allocator<TNChartFormulaType>> )persistentFormulaTypes;
-(BOOL)dataFormulaAreRegularForSeriesInsertionWithCalcEngine:(id)arg0 inOwner:(struct TSKUIDStruct )arg1 ;
-(BOOL)formulasOfType:(NSUInteger)arg0 areAllStaticWithCalcEngine:(id)arg1 inEntity:(struct TSKUIDStruct )arg2 ;
-(BOOL)isEqualToFormulaStorage:(id)arg0 ;
-(BOOL)labelFormulasAreAllStaticWithCalcEngine:(id)arg0 inEntity:(struct TSKUIDStruct )arg1 ;
-(NSUInteger)numberOfGroupsWithCalcEngine:(id)arg0 inEntity:(struct TSKUIDStruct )arg1 shouldSkipHiddenData:(BOOL)arg2 ;
-(NSUInteger)numberOfLabelsForType:(NSUInteger)arg0 withCalcEngine:(id)arg1 inEntity:(struct TSKUIDStruct )arg2 shouldSkipHiddenData:(BOOL)arg3 ;
-(NSUInteger)numberOfSeriesWithCalcEngine:(id)arg0 inEntity:(struct TSKUIDStruct )arg1 shouldSkipHiddenData:(BOOL)arg2 ;
-(NSUInteger)numberOfTotalCategoryLabelsWithCalcEngine:(id)arg0 inEntity:(struct TSKUIDStruct )arg1 shouldSkipHiddenData:(BOOL)arg2 ;
-(NSUInteger)p_calculateNumberOfGroupsWithCalcEngine:(id)arg0 inEntity:(struct TSKUIDStruct )arg1 shouldSkipHiddenData:(BOOL)arg2 ;
-(id)areaFormulaWithCalcEngine:(id)arg0 inOwner:(struct TSKUIDStruct )arg1 ;
-(id)copyByRewriting:(BOOL)arg0 withCalcEngine:(id)arg1 andHostUID:(struct TSKUIDStruct )arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptorForSummaryChart:(struct TSKUIDStruct )arg0 withCalcEngine:(id)arg1 ;
-(id)formulaForID:(struct TSUCellCoord )arg0 ;
-(id)formulaListForType:(NSUInteger)arg0 ;
-(id)formulaTypeEnumerator;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithChartFormulaStorage:(id)arg0 ;
-(id)initWithDirection:(int)arg0 ;
-(id)initWithDirection:(int)arg0 scheme:(int)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)referencedEntitiesWithCalcEngine:(id)arg0 ;
-(void)clearCachesForCalculationEngine:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif