// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHSTYLESWAPUNDOTUPLE_H
#define TSCHSTYLESWAPUNDOTUPLE_H

@class TSSPropertySet, TSSStyle, NSUUID, TSPObject<TSCHStyleSwapSupporting>;

#import <Foundation/Foundation.h>

#import "TSCHStyleSemanticTag.h"
#import "TSCHStyleOwnerReference.h"

@interface TSCHStyleSwapUndoTuple : NSObject {
    int _index;
    TSSPropertySet *_mutatedProperties;
}


@property (readonly, nonatomic) TSSStyle *afterValue; // ivar: _newValue
@property (readonly, nonatomic) TSSStyle *beforeValue; // ivar: _oldValue
@property (readonly, nonatomic) NSUInteger index;
@property (readonly, nonatomic) TSSPropertySet *mutatedProperties;
@property (readonly, nonatomic) NSUUID *refLineUUID; // ivar: _refLineUUID
@property (readonly, nonatomic) TSCHStyleSemanticTag *semanticTag;
@property (readonly, nonatomic) TSCHStyleOwnerReference *styleOwnerReference;
@property (readonly, nonatomic) TSPObject<TSCHStyleSwapSupporting> *styleSwapSupporting; // ivar: _styleSwapSupporting
@property (readonly, nonatomic) int swapType; // ivar: _swapType


+(BOOL)hasSwapTuplesRequiringConversion:(id)arg0 ;
+(id)convertedSwapTuplesForSwapTuples:(id)arg0 chartInfo:(id)arg1 ;
-(BOOL)canApplyTupleToStyleSwapSupporting:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSwappingSameStyleObject:(id)arg0 ;
-(BOOL)isSwappingSameStyleValues:(id)arg0 ;
-(NSUInteger)hash;
-(id)convertedSwapTupleForChartInfo:(id)arg0 ;
-(id)description;
-(id)initFromSOSWithSwapType:(int)arg0 index:(NSUInteger)arg1 oldValue:(id)arg2 newValue:(id)arg3 refLineUUID:(id)arg4 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithChartInfo:(id)arg0 swapType:(int)arg1 index:(NSUInteger)arg2 oldValue:(id)arg3 newValue:(id)arg4 ;
-(id)initWithChartInfo:(id)arg0 swapType:(int)arg1 index:(NSUInteger)arg2 oldValue:(id)arg3 newValue:(id)arg4 refLineUUID:(id)arg5 ;
-(id)initWithChartStylePreset:(id)arg0 swapType:(int)arg1 index:(NSUInteger)arg2 oldValue:(id)arg3 newValue:(id)arg4 ;
-(id)initWithPersistentStyleSwapSupporting:(id)arg0 swapType:(int)arg1 index:(NSUInteger)arg2 oldValue:(id)arg3 newValue:(id)arg4 refLineUUID:(id)arg5 ;
-(id)inverse;
-(id)migratedStyleForStyle:(id)arg0 documentRoot:(id)arg1 ;
-(id)migratedSwapTupleForDocumentRoot:(id)arg0 ;
-(id)p_nonequalPropertiesFromMap:(id)arg0 toMap:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif