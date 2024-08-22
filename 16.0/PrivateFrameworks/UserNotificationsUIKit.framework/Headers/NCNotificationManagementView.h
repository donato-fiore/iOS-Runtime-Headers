// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONMANAGEMENTVIEW_H
#define NCNOTIFICATIONMANAGEMENTVIEW_H

@class UIView, UIImageView, UILabel, NSMutableDictionary, NSString;
@protocol MTVisualStylingProviding;


#import "NCNotificationManagementBlueButton.h"

@interface NCNotificationManagementView : UIView <MTVisualStylingProviding>

 {
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_topSeparator;
    UILabel *_explanation;
    UIView *_bottomSeparator;
    NSMutableDictionary *_categoriesToProviders;
    BOOL _isCriticalAlert;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NCNotificationManagementBlueButton *deliveryButton; // ivar: _deliveryButton
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NCNotificationManagementBlueButton *onOffToggleButton; // ivar: _onOffToggleButton
@property (readonly) Class superclass;


-(CGFloat)_separatorHeight;
-(id)_newSeparatorView;
-(id)initWithIcon:(id)arg0 title:(id)arg1 subtitle:(id)arg2 sectionSettings:(id)arg3 criticalAlert:(BOOL)arg4 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )_explanationSizeForPlatterWidth:(CGFloat)arg0 ;
-(struct CGSize )_titleSizeForPlatterWidth:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureDeliveryButtonIfNeccessary:(id)arg0 ;
-(void)_configureExplanationIfNeccessary:(id)arg0 ;
-(void)_configureIconIfNeccessary:(id)arg0 ;
-(void)_configureOnOffToggleButtonIfNeccessary:(id)arg0 ;
-(void)_configureSubtitleIfNeccessary:(id)arg0 ;
-(void)_configureTitleIfNeccessary:(id)arg0 ;
-(void)_configureTopSeparatorIfNeccessary;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateExplanationVisualStyling;
-(void)_updateTopSeparatorVisualStyling;
-(void)layoutSubviews;


@end


#endif