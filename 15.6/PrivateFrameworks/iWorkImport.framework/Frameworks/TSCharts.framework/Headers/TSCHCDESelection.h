// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCDESELECTION_H
#define TSCHCDESELECTION_H

@class TSKSelection;


#import "TSCHChartDrawableInfo.h"

@interface TSCHCDESelection : TSKSelection

@property (readonly, retain, nonatomic) TSCHChartDrawableInfo *chartInfo; // ivar: _info
@property (readonly, nonatomic) _NSRange columnRange; // ivar: _columnRange
@property (readonly, nonatomic) _NSRange rowRange; // ivar: _rowRange


+(Class)archivedSelectionClass;
+(id)selectionWithChartInfo:(id)arg0 rowRange:(struct _NSRange )arg1 columnRange:(struct _NSRange )arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithChartInfo:(id)arg0 rowRange:(struct _NSRange )arg1 columnRange:(struct _NSRange )arg2 ;
-(id)initWithRowRange:(struct _NSRange )arg0 columnRange:(struct _NSRange )arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif