// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCDIGESTFEATUREDNOTIFICATIONSCONTAINERVIEW_H
#define NCDIGESTFEATUREDNOTIFICATIONSCONTAINERVIEW_H

@class UIView, NSArray, NSMutableArray, MTVisualStylingProvider, NSString;
@protocol NCDigestFeaturedNotificationsContainerDisplaying;



@interface NCDigestFeaturedNotificationsContainerView : UIView <NCDigestFeaturedNotificationsContainerDisplaying>

 {
    NSArray *_featuredNotificationContentProviders;
    NSMutableArray *_notificationViews;
    NSMutableArray *_notificationViewTapButtons;
    UIView *_dividerView;
    BOOL _isDisplayingFeaturedNotificationViewsWithAttachments;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


-(BOOL)_isLayoutHorizontalForFeaturedNotificationViews;
-(BOOL)_shouldPresentFeaturedNotificationViewsWithAttachmentsForContentProviders:(id)arg0 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)_contentProviderForTapButton:(id)arg0 ;
-(id)_newFeaturedNotificationViewForContentProvider:(id)arg0 ;
-(id)_newNotificationSeamlessContentViewForContentProvider:(id)arg0 ;
-(id)_newTapButton;
-(id)_notificationViewForTapButton:(id)arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonTapped:(id)arg0 ;
-(void)_configureDividerViewIfNecessary;
-(void)_configureNotificationContentView:(id)arg0 withContentProvider:(id)arg1 ;
-(void)_highlightView:(id)arg0 ;
-(void)_layoutNotificationContentViewsHorizontally;
-(void)_layoutNotificationContentViewsVertically;
-(void)_unhighlightView:(id)arg0 ;
-(void)_updateViewHighlightingForView:(id)arg0 isHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)updateContent;


@end


#endif