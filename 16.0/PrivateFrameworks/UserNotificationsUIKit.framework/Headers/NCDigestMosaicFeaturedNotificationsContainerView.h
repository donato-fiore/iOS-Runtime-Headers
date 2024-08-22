// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCDIGESTMOSAICFEATUREDNOTIFICATIONSCONTAINERVIEW_H
#define NCDIGESTMOSAICFEATUREDNOTIFICATIONSCONTAINERVIEW_H

@class UIView, NSArray, NSMutableArray, MTVisualStylingProvider, NSString;
@protocol NCDigestFeaturedNotificationsContainerDisplaying;



@interface NCDigestMosaicFeaturedNotificationsContainerView : UIView <NCDigestFeaturedNotificationsContainerDisplaying>

 {
    NSArray *_featuredNotificationContentProviders;
    NSMutableArray *_notificationViews;
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


-(BOOL)_isDisplayingRichFeaturedNotifications;
-(BOOL)_shouldShowImageAttachments;
-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_overlapMarginForLargeFeaturedView;
-(NSUInteger)_contentViewStyleForIndex:(NSUInteger)arg0 ;
-(id)_newFeaturedNotificationViewForContentProvider:(id)arg0 contentViewStyle:(NSUInteger)arg1 showImageAttachment:(BOOL)arg2 ;
-(id)_newNotificationSeamlessContentViewForContentProvider:(id)arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGRect )_sizingBoundsForLargeFeaturedViewInRect:(struct CGRect )arg0 ;
-(struct CGRect )_sizingBoundsForMediumFeaturedViewInRect:(struct CGRect )arg0 ;
-(struct CGRect )_sizingBoundsForSmallFeaturedViewInRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureNotificationContentView:(id)arg0 withContentProvider:(id)arg1 showImageAttachment:(BOOL)arg2 contentViewStyle:(NSUInteger)arg3 ;
-(void)_layoutLargeFeaturedView:(id)arg0 ;
-(void)_layoutMediumFeaturedView:(id)arg0 ;
-(void)_layoutSmallFeaturedView:(id)arg0 ;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)updateContent;


@end


#endif