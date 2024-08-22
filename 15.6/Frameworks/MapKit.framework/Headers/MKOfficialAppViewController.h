// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKOFFICIALAPPVIEWCONTROLLER_H
#define MKOFFICIALAPPVIEWCONTROLLER_H

@class NSString;
@protocol MKOfficialAppViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, _MKInfoCardAnalyticsDelegate;


#import "MKPlaceSectionViewController.h"
#import "MKMapItem.h"
#import "MKPlaceSectionHeaderView.h"
#import "MKOfficialAppView.h"

@interface MKOfficialAppViewController : MKPlaceSectionViewController <MKOfficialAppViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_MKInfoCardAnalyticsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isShowing; // ivar: _isShowing
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (retain, nonatomic) MKPlaceSectionHeaderView *officialAppHeaderView; // ivar: _officialAppHeaderView
@property (retain, nonatomic) MKOfficialAppView *officialAppView; // ivar: _officialAppView
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithMKMapItem:(id)arg0 ;
-(void)_loadAppArtwork:(id)arg0 ;
-(void)_loadOfficialApp;
-(void)_updateAppImage:(id)arg0 error:(id)arg1 ;
-(void)officialAppViewDidSelectPunchOutButton:(id)arg0 ;
-(void)setAppStoreApp:(id)arg0 ;
-(void)updateOfficialViewButtonText;
-(void)viewDidLoad;


@end


#endif