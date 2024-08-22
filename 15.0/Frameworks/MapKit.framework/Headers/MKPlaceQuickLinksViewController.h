// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACEQUICKLINKSVIEWCONTROLLER_H
#define MKPLACEQUICKLINKSVIEWCONTROLLER_H

@class NSArray, UIView, NSString;
@protocol MKQuickLinkItemViewDelegate, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate, _MKInfoCardAnalyticsDelegate, MKPlaceQuickLinksViewControllerDelegate;


#import "MKPlaceSectionViewController.h"
#import "MKMapItem.h"

@interface MKPlaceQuickLinksViewController : MKPlaceSectionViewController <MKQuickLinkItemViewDelegate, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate>

 {
    NSArray *_quickLinks;
    NSArray *_quickLinkViews;
    UIView *_contentView;
    NSUInteger _maxButtonsPerRow;
    NSArray *_constraints;
}


@property (weak, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKPlaceQuickLinksViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly) Class superclass;


+(id)placeQuickLinksViewControllerFor:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(NSUInteger)maxButtonsPerRow;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)_captureTapActionWithAppClipLink:(id)arg0 ;
-(void)_captureTapActionWithQuickLink:(id)arg0 ;
-(void)createActionViews;
-(void)createConstraints;
-(void)infoCardThemeChanged;
-(void)layoutButtons;
-(void)quickLinkItemViewSelected:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif