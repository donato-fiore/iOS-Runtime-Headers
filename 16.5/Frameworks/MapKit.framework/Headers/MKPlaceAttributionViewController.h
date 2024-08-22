// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACEATTRIBUTIONVIEWCONTROLLER_H
#define MKPLACEATTRIBUTIONVIEWCONTROLLER_H

@class NSAttributedString, NSString, NSArray;
@protocol MKPlaceAttributionCellDelegate, MKStackingViewControllerFixedHeightAware, MKModuleViewControllerProtocol, _MKInfoCardAnalyticsDelegate;


#import "MKPlaceSectionViewController.h"
#import "_MKMapItemAttribution.h"
#import "MKPlaceAttributionCell.h"
#import "MKMapItem.h"

@interface MKPlaceAttributionViewController : MKPlaceSectionViewController <MKPlaceAttributionCellDelegate, MKStackingViewControllerFixedHeightAware, MKModuleViewControllerProtocol>



@property (weak, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (retain, nonatomic) _MKMapItemAttribution *attribution; // ivar: _attribution
@property (retain, nonatomic) MKPlaceAttributionCell *attributionCell; // ivar: _attributionCell
@property (copy, nonatomic) NSAttributedString *attributionString; // ivar: _attributionString
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (nonatomic) BOOL resizableViewsDisabled; // ivar: _resizableViewsDisabled
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *urlStrings; // ivar: _urlStrings


-(BOOL)_canShowWhileLocked;
-(id)infoAttributionString;
-(void)infoCardThemeChanged;
-(void)loadView;
-(void)openURL;
-(void)updateLogo;
-(void)viewDidLoad;


@end


#endif