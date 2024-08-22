// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWIDGETCONFIGURATIONCARDVIEW_H
#define WFWIDGETCONFIGURATIONCARDVIEW_H

@class UIView, MTStylingProvidingSolidColorView, UILayoutGuide, NSString, MTVisualStylingProvider;
@protocol WFWidgetConfigurationCardHeaderViewDelegate, WFWidgetConfigurationCardViewDelegate;


#import "WFWidgetConfigurationCardHeaderView.h"

@interface WFWidgetConfigurationCardView : UIView <WFWidgetConfigurationCardHeaderViewDelegate>



@property (readonly, nonatomic) MTStylingProvidingSolidColorView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UILayoutGuide *contentViewGuide; // ivar: _contentViewGuide
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFWidgetConfigurationCardViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MTVisualStylingProvider *fillProvider; // ivar: _fillProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFWidgetConfigurationCardHeaderView *headerView; // ivar: _headerView
@property (readonly, nonatomic) MTVisualStylingProvider *strokeProvider; // ivar: _strokeProvider
@property (readonly) Class superclass;
@property (nonatomic) CGFloat widgetDescriptionTallScriptCompensatedSpacing; // ivar: _widgetDescriptionTallScriptCompensatedSpacing


-(id)initWithRequest:(id)arg0 contentView:(id)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)widgetConfigurationCardHeaderViewDidRequestToClose:(id)arg0 ;


@end


#endif