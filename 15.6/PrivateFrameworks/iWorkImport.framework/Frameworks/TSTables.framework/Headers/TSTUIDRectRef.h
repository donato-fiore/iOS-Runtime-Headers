// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTUIDRECTREF_H
#define TSTUIDRECTREF_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCECellTractRef.h"
#import "TSTColumnRowUIDMapper.h"
#import "TSCECalculationEngine.h"

@interface TSTUIDRectRef : NSObject <NSCopying>

 {
    ? _uidRange;
    TSCECellTractRef *_lastKnownViewTractRef;
    NSUInteger _viewMapVersionCounter;
    TSTColumnRowUIDMapper *_viewUidMapper;
    RefTypeHolder<TSCERangeRef, 2> _chromeRangeRef;
}


@property (readonly, nonatomic) NSUInteger area;
@property (readonly) TSUModelCellCoord baseBottomRightCoord;
@property (nonatomic) unsigned char basePreserveFlags; // ivar: _basePreserveFlags
@property (readonly) TSUModelCellCoord baseTopLeftCoord;
@property (weak, nonatomic) TSCECalculationEngine *calcEngine; // ivar: _calcEngine
@property ? chromeRangeRef;
@property (readonly, nonatomic) BOOL isBaseRectangle;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isViewRectangle;
@property (nonatomic) BOOL needsUidRectUpgrade; // ivar: _needsUidRectUpgrade
@property (readonly, nonatomic) NSUInteger numberOfColumns;
@property (readonly, nonatomic) NSUInteger numberOfRows;
@property (readonly, nonatomic) TSKUIDStruct singleReferencedColumnUid;
@property (readonly, nonatomic) BOOL spansAllColumns;
@property (readonly, nonatomic) BOOL spansAllRows;
@property (readonly, nonatomic) TSKUIDStruct tableUID; // ivar: _tableUID
@property ? uidRange;
@property (readonly) TSUViewCellCoord viewBottomRightCoord;
@property (nonatomic) unsigned char viewPreserveFlags;
@property (readonly) TSUViewCellCoord viewTopLeftCoord;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCalcEngine:(id)arg0 baseRangeRef:(*void)arg1 preserveFlags:(unsigned char)arg2 ;
-(id)initWithCalcEngine:(id)arg0 chromeRangeRef:(*void)arg1 preserveFlags:(unsigned char)arg2 ;
-(id)initWithCalcEngine:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 uidRange:(*void)arg2 preserveFlags:(unsigned char)arg3 ;
-(id)initWithCalcEngine:(id)arg0 viewRangeRef:(*void)arg1 preserveFlags:(unsigned char)arg2 ;
-(id)initWithCalcEngine:(id)arg0 viewTractRef:(id)arg1 ;
-(id)uidTractListWithPurpose:(unsigned char)arg0 ;
-(id)viewCellRegionWithRangeContext:(unsigned char)arg0 ;


@end


#endif