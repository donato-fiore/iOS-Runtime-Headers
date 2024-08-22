// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKACTIONSHEETMENUTITLEVIEW_H
#define CKACTIONSHEETMENUTITLEVIEW_H

@class UIView, UIScrollView, UILabel;



@interface CKActionSheetMenuTitleView : UIView {
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
}




-(CGFloat)_desiredHeightForLabel:(id)arg0 parentBoundingRect:(struct CGRect )arg1 ;
-(id)_textColor;
-(id)initWithTitle:(id)arg0 ;
-(void)updateTitleConstraintsForBoundingRect:(struct CGRect )arg0 ;


@end


#endif