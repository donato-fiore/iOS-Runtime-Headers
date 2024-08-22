// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFTABGROUPTITLEVIEW_H
#define SFTABGROUPTITLEVIEW_H

@class UIButton, UILabel, WBTabGroup;



@interface SFTabGroupTitleView : UIButton {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (retain, nonatomic) WBTabGroup *tabGroup; // ivar: _tabGroup


-(id)_attributedStringWithImageNamed:(id)arg0 textStyle:(id)arg1 additionalSymbolicTraits:(unsigned int)arg2 color:(id)arg3 baselineOffset:(CGFloat)arg4 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)updateTitle;


@end


#endif