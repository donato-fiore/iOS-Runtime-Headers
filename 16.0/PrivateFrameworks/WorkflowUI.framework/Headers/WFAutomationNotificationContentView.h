// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAUTOMATIONNOTIFICATIONCONTENTVIEW_H
#define WFAUTOMATIONNOTIFICATIONCONTENTVIEW_H

@class UIView, UILabel, UIStackView;


#import "WFRowOfIconsView.h"

@interface WFAutomationNotificationContentView : UIView

@property (readonly, nonatomic) WFRowOfIconsView *actionIconsView; // ivar: _actionIconsView
@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateUIFromNotification:(id)arg0 ;


@end


#endif