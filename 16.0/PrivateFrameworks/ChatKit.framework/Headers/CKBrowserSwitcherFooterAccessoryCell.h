// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBROWSERSWITCHERFOOTERACCESSORYCELL_H
#define CKBROWSERSWITCHERFOOTERACCESSORYCELL_H

@class UICollectionReusableView, UIView;



@interface CKBrowserSwitcherFooterAccessoryCell : UICollectionReusableView

@property (nonatomic) CGFloat maxHeight; // ivar: _maxHeight
@property (nonatomic) CGFloat minHeight; // ivar: _minHeight
@property (retain, nonatomic) UIView *seperatorView; // ivar: _seperatorView


+(id)reuseIdentifier;
+(id)supplementryViewKind;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif