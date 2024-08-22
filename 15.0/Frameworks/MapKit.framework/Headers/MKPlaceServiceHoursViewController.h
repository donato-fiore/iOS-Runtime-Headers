// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACESERVICEHOURSVIEWCONTROLLER_H
#define MKPLACESERVICEHOURSVIEWCONTROLLER_H

@class UIStackView, NSString, UIScrollView;
@protocol _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKPlaceServiceHoursViewControllerProtocol;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceSectionHeaderView.h"
#import "MKMapItem.h"

@interface MKPlaceServiceHoursViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>

 {
    BOOL _isExpanded;
    MKPlaceSectionHeaderView *_headerView;
    NSInteger _type;
    UIStackView *_stackView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (weak, nonatomic) NSObject<MKPlaceServiceHoursViewControllerProtocol> *placeServiceDelegate; // ivar: _placeServiceDelegate
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


+(id)placeServiceHoursWithMapItem:(id)arg0 type:(NSInteger)arg1 ;
+(id)titleString;
-(BOOL)_canShowWhileLocked;
-(NSUInteger)_maxRows;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithMapItem:(id)arg0 type:(NSInteger)arg1 ;
-(void)_contentSizeDidChange;
-(void)_showAllHeaderButtonTapped;
-(void)_updateServiceHourRows;
-(void)captureCloseAnalytics;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif