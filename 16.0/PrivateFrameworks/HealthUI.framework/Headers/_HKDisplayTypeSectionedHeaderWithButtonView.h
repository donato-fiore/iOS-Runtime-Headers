// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKDISPLAYTYPESECTIONEDHEADERWITHBUTTONVIEW_H
#define _HKDISPLAYTYPESECTIONEDHEADERWITHBUTTONVIEW_H

@class HKDisplayTypeSectionedHeaderView, UIButton, UIAction;



@interface _HKDisplayTypeSectionedHeaderWithButtonView : HKDisplayTypeSectionedHeaderView

@property (retain, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (retain, nonatomic) UIAction *accessoryButtonAction; // ivar: _accessoryButtonAction


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updatePreferredTitleFont;
-(void)prepareForReuse;


@end


#endif