// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNCHARTSELECTION_H
#define TNCHARTSELECTION_H

@class TSDDrawableSelection, TSCHChartDrawableInfo;



@interface TNChartSelection : TSDDrawableSelection

@property (readonly, nonatomic) TSCHChartDrawableInfo *chart; // ivar: _chart
@property (readonly, nonatomic) TSCERangeRef reference; // ivar: _reference


+(Class)archivedSelectionClass;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)returnChartFrameForAutoscroll;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithChartInfo:(id)arg0 ;
-(id)initWithChartInfo:(id)arg0 reference:(struct TSCERangeRef )arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif