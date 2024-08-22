// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTSELECTIONCARETRECT_H
#define _UITEXTSELECTIONCARETRECT_H



#import "UITextSelectionRect.h"

@interface _UITextSelectionCaretRect : UITextSelectionRect {
    CGRect _rect;
}




+(id)selectionRectWithRect:(struct CGRect )arg0 ;
-(BOOL)containsEnd;
-(BOOL)containsStart;
-(BOOL)isVertical;
-(NSInteger)writingDirection;
-(struct CGRect )rect;


@end


#endif