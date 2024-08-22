// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSTARTPAGESECTIONHEADERTITLEVIEW_H
#define SFSTARTPAGESECTIONHEADERTITLEVIEW_H

@class UIView, UIButton, NSArray, UILabel, UIMenu, NSString;



@interface SFStartPageSectionHeaderTitleView : UIView {
    UIButton *_button;
    NSArray *_currentConstraints;
    UIView *_currentConstraintsSubview;
    UILabel *_label;
}


@property (copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)buttonShapesEnabledStatusDidChange:(id)arg0 ;
-(void)dealloc;
-(void)setModel:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif