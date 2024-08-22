// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFTEXTSELECTIONRECT_H
#define PDFTEXTSELECTIONRECT_H

@class UITextSelectionRect;


#import "PDFPage.h"

@interface PDFTextSelectionRect : UITextSelectionRect {
    PDFPage *_page;
    CGRect _rect;
    BOOL _isStartingRect;
    BOOL _isEndingRect;
}




-(BOOL)containsEnd;
-(BOOL)containsStart;
-(BOOL)isVertical;
-(NSInteger)writingDirection;
-(id)description;
-(id)initWithRect:(struct CGRect )arg0 onPage:(id)arg1 ;
-(struct CGRect )rect;
-(void)setIsEndingRect:(BOOL)arg0 ;
-(void)setIsStartingRect:(BOOL)arg0 ;


@end


#endif