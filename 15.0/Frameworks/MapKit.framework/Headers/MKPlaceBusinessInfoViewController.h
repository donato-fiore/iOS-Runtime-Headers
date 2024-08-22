// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACEBUSINESSINFOVIEWCONTROLLER_H
#define MKPLACEBUSINESSINFOVIEWCONTROLLER_H

@class NSString;
@protocol _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol;


#import "MKPlaceSectionViewController.h"
#import "MKMapItem.h"
#import "MKPlaceSectionHeaderView.h"
#import "_MKPlaceBusinessInfoRow.h"
#import "MKPlaceAmenitiesProvider.h"

@interface MKPlaceBusinessInfoViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>

 {
    MKMapItem *_mapItem;
    MKPlaceSectionHeaderView *_headerView;
    _MKPlaceBusinessInfoRow *_businessInfoRow;
    MKPlaceAmenitiesProvider *_amenityProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly) Class superclass;


+(BOOL)mapItemHasBusinessInfoToDisplay:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(void)_updateBusinessInfo;
-(void)infoCardThemeChanged;
-(void)viewDidLoad;


@end


#endif