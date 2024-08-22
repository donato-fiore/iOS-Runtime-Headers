// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCCARPLAYBANNERCONTENTVIEW_H
#define NCCARPLAYBANNERCONTENTVIEW_H

@class UIView, NSArray, UILabel, CPUIBannerViewButton, UILabel<BSUIDateLabel>, NSString, NCNotificationRequest;
@protocol BSUIDateLabelDelegate, NCCarPlayBannerContentViewDelegate;



@interface NCCarPlayBannerContentView : UIView <BSUIDateLabelDelegate>

 {
    BOOL _displayPropertiesValid;
    NSArray *_iconImageViews;
    UILabel *_titleLabel;
    CGFloat _titleAscender;
    UILabel *_subTitleLabel;
    CGFloat _subTitleAscender;
    CPUIBannerViewButton *_okButton;
    CPUIBannerViewButton *_actionButton;
    UILabel<BSUIDateLabel> *_relevanceDateLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCCarPlayBannerContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NCNotificationRequest *notificationRequest; // ivar: _notificationRequest
@property (readonly) Class superclass;


-(BOOL)_hasSubtitle;
-(BOOL)_shouldShowOKButton;
-(BOOL)canBecomeFirstResponder;
-(id)_boundedTraitCollectionForLabelFont;
-(id)_defaultRelevanceDateFont;
-(id)_subTitle;
-(id)_subtitleFont;
-(id)_title;
-(id)_titleFont;
-(id)initWithNotificationRequest:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_iconImageInsets;
-(void)_layoutForButton:(id)arg0 contentFrame:(struct CGRect )arg1 ;
-(void)_reloadDisplayPropertiesIfNecessary;
-(void)_setRelevanceDate:(id)arg0 allDay:(BOOL)arg1 timeZone:(id)arg2 ;
-(void)_updateButtonStates;
-(void)dateLabelDidChange:(id)arg0 ;
-(void)dealloc;
-(void)invalidateDisplayProperties;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateRequestToInstance:(id)arg0 ;


@end


#endif