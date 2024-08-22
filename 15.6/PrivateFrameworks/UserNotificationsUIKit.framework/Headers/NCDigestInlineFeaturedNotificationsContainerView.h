// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCDIGESTINLINEFEATUREDNOTIFICATIONSCONTAINERVIEW_H
#define NCDIGESTINLINEFEATUREDNOTIFICATIONSCONTAINERVIEW_H

@class NSArray, MTVisualStylingProvider, UIView, NSString;
@protocol NCDigestFeaturedNotificationsContainerDisplaying;


#import "NCNotificationListBaseContentView.h"
#import "NCNotificationInlineFeaturedSectionList.h"

@interface NCDigestInlineFeaturedNotificationsContainerView : NCNotificationListBaseContentView <NCDigestFeaturedNotificationsContainerDisplaying>

 {
    NSArray *_featuredNotificationContentProviders;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NCNotificationInlineFeaturedSectionList *_inlineFeaturedSectionList;
    UIView *_dividerView;
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


-(BOOL)adjustForContentSizeCategoryChange;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureDividerViewIfNecessary;
-(void)_configureInlineFeaturedSectionListIfNecessaryWithDelegate:(id)arg0 ;
-(void)_layoutDividerViewIfNecessary;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)layoutSubviews;
-(void)updateContent;


@end


#endif