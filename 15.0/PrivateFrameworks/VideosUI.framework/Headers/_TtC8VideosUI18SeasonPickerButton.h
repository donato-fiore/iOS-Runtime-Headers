// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI18SEASONPICKERBUTTON_H
#define _TTC8VIDEOSUI18SEASONPICKERBUTTON_H

@class UIControl, NSArray;


#import "VUILabel.h"

@interface _TtC8VideosUI18SeasonPickerButton : UIControl {
    ? delegate;
    ? chevronDownImageView;
    ? currentLabel;
    ? altLabel;
    ? textLayout;
    ? currentIndex;
    ? headerTitles;
}


@property (nonatomic, readonly) VUILabel *accessibilityAltLabel;
@property (nonatomic, readonly) VUILabel *accessibilityCurrentLabel;
@property (nonatomic, readonly) NSArray *accessibilityHeaderTitles;


-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif