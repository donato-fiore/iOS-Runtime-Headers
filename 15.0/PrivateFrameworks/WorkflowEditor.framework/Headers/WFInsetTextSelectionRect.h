// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINSETTEXTSELECTIONRECT_H
#define WFINSETTEXTSELECTIONRECT_H

@class UITextSelectionRect;



@interface WFInsetTextSelectionRect : UITextSelectionRect

@property (readonly, nonatomic) UIEdgeInsets insets; // ivar: _insets
@property (readonly, nonatomic) UITextSelectionRect *selectionRect; // ivar: _selectionRect


-(BOOL)containsEnd;
-(BOOL)containsStart;
-(BOOL)isVertical;
-(NSInteger)writingDirection;
-(id)initWithSelectionRect:(id)arg0 insets:(struct UIEdgeInsets )arg1 ;
-(struct CGRect )rect;


@end


#endif