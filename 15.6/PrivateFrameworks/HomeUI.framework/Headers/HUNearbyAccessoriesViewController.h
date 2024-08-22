// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNEARBYACCESSORIESVIEWCONTROLLER_H
#define HUNEARBYACCESSORIESVIEWCONTROLLER_H

@class HMAccessory, NSString, NSArray, UILabel, _UIContentUnavailableView;
@protocol HUPresentationDelegateHost, HUNearbyAccessoriesViewControllerDelegate, HUPresentationDelegate;


#import "HUServiceGridViewController.h"
#import "HUNearbyAccessoriesItemManager.h"

@interface HUNearbyAccessoriesViewController : HUServiceGridViewController <HUPresentationDelegateHost>



@property (retain, nonatomic) HMAccessory *currentAccessory; // ivar: _currentAccessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUNearbyAccessoriesItemManager *itemManager;
@property (weak, nonatomic) NSObject<HUNearbyAccessoriesViewControllerDelegate> *nearbyAccessoriesDelegate; // ivar: _nearbyAccessoriesDelegate
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsQuickControls; // ivar: _supportsQuickControls
@property (retain, nonatomic) NSArray *userInfoConstraints; // ivar: _userInfoConstraints
@property (retain, nonatomic) UILabel *userInfoDescription; // ivar: _userInfoDescription
@property (retain, nonatomic) _UIContentUnavailableView *userInfoHeading; // ivar: _userInfoHeading


-(BOOL)presentationCoordinator:(id)arg0 shouldBeginPresentationWithContext:(id)arg1 ;
-(BOOL)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg0 ;
-(id)initWithSourceItem:(id)arg0 supportsQuickControls:(BOOL)arg1 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)_updateUserInfo;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)displayEditor;
-(void)doneButtonPressed:(id)arg0 ;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif