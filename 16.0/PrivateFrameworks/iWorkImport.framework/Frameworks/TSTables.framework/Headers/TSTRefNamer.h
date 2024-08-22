// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTREFNAMER_H
#define TSTREFNAMER_H

@class NSString, NSCharacterSet;
@protocol TSCERefNamingProtocol;

#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"

@interface TSTRefNamer : NSObject <TSCERefNamingProtocol>



@property (readonly, weak, nonatomic) TSCECalculationEngine *calcEngine; // ivar: _calcEngine
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSCharacterSet *nonWhitespaceAndNewlineCharSet; // ivar: _nonWhitespaceAndNewlineCharSet
@property (readonly) Class superclass;
@property (retain, nonatomic) NSCharacterSet *whitespaceAndNewlineCharSet; // ivar: _whitespaceAndNewlineCharSet


-(id)cellRangeName:(id)arg0 namingContext:(id)arg1 ;
-(id)cellRangeNameFromChromeRangeRef:(*void)arg0 namingContext:(id)arg1 ;
-(id)chromeNameForBaseRangeRef:(*void)arg0 namingContext:(id)arg1 ;
-(id)columnNameForCellCoord:(struct TSUCellCoord *)arg0 restrictToBodyRange:(BOOL)arg1 translator:(id)arg2 cellRangeContainingName:(struct TSUCellRect *)arg3 ;
-(id)columnNameForColumnIndex:(unsigned short)arg0 withFallbackFormat:(id)arg1 translator:(id)arg2 ;
-(id)createNameComponentWithChromeRangeRef:(*void)arg0 rowOrColumnName:(id)arg1 isSticky:(BOOL)arg2 namingContext:(id)arg3 ;
-(id)initWithCalcEngine:(id)arg0 ;
-(id)nameForBaseRangeRef:(*void)arg0 namingContext:(id)arg1 ;
-(id)nameForBaseTractRef:(id)arg0 namingContext:(id)arg1 ;
-(id)nameForChromeColumnIndex:(struct TSUChromeColumnIndex *)arg0 inTable:(struct TSKUIDStruct *)arg1 useSymbolicNames:(BOOL)arg2 ;
-(id)nameForChromeRangeRef:(*void)arg0 namingContext:(id)arg1 ;
-(id)nameForViewTractRef:(id)arg0 namingContext:(id)arg1 coordMapper:(id)arg2 ;
-(id)nameForWrappedRangeRef:(id)arg0 namingContext:(id)arg1 ;
-(id)p_symbolicColumnNameForRefPair:(id)arg0 useTopLeft:(BOOL)arg1 isSticky:(BOOL)arg2 foundRange:(struct TSUModelCellRect *)arg3 inTableModel:(id)arg4 namingContext:(id)arg5 ;
-(id)p_symbolicRowNameForRefPair:(id)arg0 useTopLeft:(BOOL)arg1 isSticky:(BOOL)arg2 foundRange:(struct TSUModelCellRect *)arg3 inTableModel:(id)arg4 namingContext:(id)arg5 ;
-(id)rowNameForCellCoord:(struct TSUCellCoord *)arg0 restrictToBodyRange:(BOOL)arg1 translator:(id)arg2 cellRangeContainingName:(struct TSUCellRect *)arg3 ;
-(id)stringForRangeRefPair:(id)arg0 namingContext:(id)arg1 ;
-(id)stringValueAtCellCoord:(struct TSUCellCoord *)arg0 translator:(id)arg1 ;


@end


#endif