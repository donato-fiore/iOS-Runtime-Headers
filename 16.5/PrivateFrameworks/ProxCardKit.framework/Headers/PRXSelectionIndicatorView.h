// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRXSELECTIONINDICATORVIEW_H
#define PRXSELECTIONINDICATORVIEW_H

@class UIView, UIImageView;



@interface PRXSelectionIndicatorView : UIView {
    UIImageView *_selectedImageView;
    UIImageView *_deselectedImageView;
}


@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif