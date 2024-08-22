// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTHIGHLIGHTSELECTIONRECT_H
#define _UITEXTHIGHLIGHTSELECTIONRECT_H



#import "UITextSelectionRect.h"

@interface _UITextHighlightSelectionRect : UITextSelectionRect

@property (nonatomic) BOOL containsEnd; // ivar: _containsEnd
@property (nonatomic) BOOL containsStart; // ivar: _containsStart
@property (nonatomic) CGRect rect; // ivar: _rect


+(id)endingSelectionRectWithRect:(struct CGRect )arg0 ;
+(id)selectionRectWithRect:(struct CGRect )arg0 ;
+(id)startingSelectionRectWithRect:(struct CGRect )arg0 ;


@end


#endif