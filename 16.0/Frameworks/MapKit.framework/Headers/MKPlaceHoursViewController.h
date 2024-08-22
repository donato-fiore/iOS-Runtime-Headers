// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEHOURSVIEWCONTROLLER_H
#define MKPLACEHOURSVIEWCONTROLLER_H

@class NSArray, NSString, NSTimeZone;
@protocol MKStackingViewControllerFixedHeightAware, MKInfoCardThemeListener, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, _MKInfoCardAnalyticsDelegate;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceSectionHeaderView.h"
#import "MKMapItem.h"

@interface MKPlaceHoursViewController : MKPlaceSectionViewController <MKStackingViewControllerFixedHeightAware, MKInfoCardThemeListener, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>

 {
    BOOL _isExpanded;
    MKPlaceSectionHeaderView *_headerView;
    NSArray *_businessHours;
}


@property (weak, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, nonatomic) NSArray *businessHours;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (nonatomic) BOOL resizableViewsDisabled; // ivar: _resizableViewsDisabled
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimeZone *timeZone;


+(id)placeHoursWithMapItem:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldOnlyShowExpanded;
-(id)hoursBuilderWithHours:(id)arg0 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithMapItem:(id)arg0 ;
-(id)titleString;
-(void)_contentSizeDidChange;
-(void)_setExpanded:(BOOL)arg0 ;
-(void)_toggleShowAllHours;
-(void)_updateHoursAnimated:(BOOL)arg0 ;
-(void)infoCardThemeChanged;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif