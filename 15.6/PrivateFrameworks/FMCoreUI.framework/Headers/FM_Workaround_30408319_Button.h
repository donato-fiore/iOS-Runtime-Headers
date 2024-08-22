// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FM_WORKAROUND_30408319_BUTTON_H
#define FM_WORKAROUND_30408319_BUTTON_H

@class UIButton, NSLayoutConstraint;



@interface FM_Workaround_30408319_Button : UIButton

@property (retain, nonatomic) NSLayoutConstraint *fm_workaround_height_constraint; // ivar: _fm_workaround_height_constraint


-(void)setAttributedTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif