// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPROFILETITLEPAGESECTIONHEADERVIEW_H
#define MCPROFILETITLEPAGESECTIONHEADERVIEW_H

@class UIView, UILabel, NSString;



@interface MCProfileTitlePageSectionHeaderView : UIView

@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) UIView *separatorLine; // ivar: _separatorLine
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif