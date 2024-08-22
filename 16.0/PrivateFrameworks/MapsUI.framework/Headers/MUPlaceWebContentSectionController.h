// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEWEBCONTENTSECTIONCONTROLLER_H
#define MUPLACEWEBCONTENTSECTIONCONTROLLER_H

@class GEOWebContentModuleConfiguration, NSString, UIView, UIViewController, NSArray, MKUGCCallToActionViewAppearance;
@protocol MUWebContentViewControllerDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUPlaceWebContentSectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUWebContentViewController.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceWebContentSectionController : MUPlaceSectionController <MUWebContentViewControllerDelegate, MUPlaceSectionControlling>

 {
    GEOWebContentModuleConfiguration *_webContentConfig;
    MUWebContentViewController *_webContentViewController;
    MUPlaceSectionView *_sectionView;
    BOOL _shouldRemoveWebContent;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MUPlaceWebContentSectionControllerDelegate> *webContentDelegate; // ivar: _webContentDelegate


-(BOOL)isImpressionable;
-(BOOL)isWebContentViewControllerParentPlacecardLoading:(id)arg0 ;
-(id)draggableContent;
-(id)initWithMapItem:(id)arg0 configuration:(id)arg1 ;
-(int)analyticsModuleType;
-(void)_setupWebContentViewController;
-(void)removeWebContentViewController:(id)arg0 arguments:(id)arg1 ;
// -(void)webContentViewController:(id)arg0 performHeightChangeWithBlock:(id)arg1 animated:(unk)arg2 completion:(BOOL)arg3  ;
-(void)webContentViewControllerDidStopLoading:(id)arg0 ;


@end


#endif