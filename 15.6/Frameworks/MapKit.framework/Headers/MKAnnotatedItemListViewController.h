// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKANNOTATEDITEMLISTVIEWCONTROLLER_H
#define MKANNOTATEDITEMLISTVIEWCONTROLLER_H

@class UIViewController, GEOMapItemAttribution, UIView, NSString;
@protocol MKPictureItemContainerAnalyticsDelegate, MKPictureItemContainerDelegate, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate, _MKInfoCardAnalyticsDelegate, MKAnnotatedItemListViewControllerDelegate;



@interface MKAnnotatedItemListViewController : UIViewController <MKPictureItemContainerAnalyticsDelegate, MKPictureItemContainerDelegate, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate>



@property (weak, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, nonatomic) UIViewController *annotatedItemListViewController; // ivar: _annotatedItemListViewController
@property (readonly, nonatomic) GEOMapItemAttribution *attribution; // ivar: _attribution
@property (readonly, nonatomic) UIView *bottomHairlineSeparator; // ivar: _bottomHairlineSeparator
@property (nonatomic, getter=isBottomSeparatorHidden) BOOL bottomSeparatorHidden;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKAnnotatedItemListViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (readonly, nonatomic) CGFloat headerTopPadding; // ivar: _headerTopPadding
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *topHairlineSeparator; // ivar: _topHairlineSeparator
@property (nonatomic, getter=isTopSeparatorHidden) BOOL topSeparatorHidden;
@property (readonly, nonatomic) CGFloat viewControllerBottomPadding; // ivar: _viewControllerBottomPadding
@property (readonly, nonatomic) CGFloat viewControllerTopPadding; // ivar: _viewControllerTopPadding


-(BOOL)_canShowWhileLocked;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithChildViewController:(id)arg0 title:(id)arg1 attribution:(id)arg2 ;
-(id)initWithPictureItemContainer:(id)arg0 title:(id)arg1 attribution:(id)arg2 presentingProtocol:(id)arg3 ;
-(id)initWithTextItemContainer:(id)arg0 title:(id)arg1 attribution:(id)arg2 ;
-(void)captureUserAction:(int)arg0 ;
-(void)infoCardThemeChanged;
-(void)openAttribution;
-(void)pictureItemContainerRequestsSceneActivationWithPhotoGallery:(id)arg0 ;
-(void)updateUIForTheme:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif