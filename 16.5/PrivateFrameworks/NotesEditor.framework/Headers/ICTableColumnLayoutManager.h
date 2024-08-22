// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLECOLUMNLAYOUTMANAGER_H
#define ICTABLECOLUMNLAYOUTMANAGER_H

@class NSUUID, ICTableColumnTextStorage, NSMutableSet, NSArray, NSTextContainer;


#import "ICLayoutManager.h"
#import "ICTableLayoutManager.h"

@interface ICTableColumnLayoutManager : ICLayoutManager

@property (readonly) NSUUID *columnID; // ivar: _columnID
@property (readonly, nonatomic) ICTableColumnTextStorage *columnTextStorage; // ivar: _columnTextStorage
@property (readonly, nonatomic) NSMutableSet *currentlyHiddenSubviews; // ivar: _currentlyHiddenSubviews
@property (retain, nonatomic) NSArray *hiddenRows; // ivar: _hiddenRows
@property (readonly, weak, nonatomic) ICTableLayoutManager *tableLayoutManager; // ivar: _tableLayoutManager
@property (readonly, nonatomic) NSTextContainer *textContainer; // ivar: _textContainer
@property (readonly) CGFloat width;


-(CGFloat)heightOfCellAtRowID:(id)arg0 ;
-(id)glyphRangesForRows:(id)arg0 ;
-(id)initWithTableLayoutManager:(id)arg0 columnID:(id)arg1 ;
-(id)rectsForGlyphRange:(struct _NSRange )arg0 ;
-(struct _NSRange )glyphRangeForBoundingRect:(struct CGRect )arg0 inTextContainer:(id)arg1 ;
-(struct _NSRange )glyphRangeForRowID:(id)arg0 ;
-(void)drawGlyphsForGlyphRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)ensureCellExistsAtRowID:(id)arg0 ;
-(void)filterAttachmentsInTextStorage:(id)arg0 range:(struct _NSRange )arg1 targetAttachment:(id)arg2 ;
-(void)removeRow:(id)arg0 ;


@end


#endif