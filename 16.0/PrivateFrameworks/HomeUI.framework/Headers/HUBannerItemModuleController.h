// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUBANNERITEMMODULECONTROLLER_H
#define HUBANNERITEMMODULECONTROLLER_H

@class NSString, NAFuture, AMSUIUpdateMultiUserTokenTask, UINavigationController;
@protocol HUBannerViewDelegate, HFUserObserver, PRXFlowDelegate, HUBannerItemModuleControllerDelegate;


#import "HUItemModuleController.h"
#import "HUGridLayoutOptions.h"

@interface HUBannerItemModuleController : HUItemModuleController <HUBannerViewDelegate, HFUserObserver, PRXFlowDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUBannerItemModuleControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NAFuture *homeMediaAccountFuture; // ivar: _homeMediaAccountFuture
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) AMSUIUpdateMultiUserTokenTask *multiUserTokenFixTask; // ivar: _multiUserTokenFixTask
@property (retain, nonatomic) UINavigationController *proxCardNavigationController; // ivar: _proxCardNavigationController
@property (readonly) Class superclass;


-(BOOL)hasTapActionForItem:(id)arg0 ;
-(Class)collectionCellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)_defaultCellLayoutOptionsForViewSize:(struct CGSize )arg0 ;
-(id)collectionLayoutSectionForSectionWithIdentifier:(id)arg0 layoutEnvironment:(id)arg1 ;
-(id)initWithModule:(id)arg0 ;
-(id)initWithModule:(id)arg0 host:(id)arg1 delegate:(id)arg2 ;
-(void)_sendBannerInteractionforItem:(id)arg0 tappedBannerItemOverrideClassName:(id)arg1 ;
-(void)bannerView:(id)arg0 dismissButtonTapped:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)dealloc;
-(void)dismissCameraUpgradeBanner;
-(void)fetchMediaAccountForHome:(id)arg0 ;
-(void)upgradeCameraSelected;
-(void)user:(id)arg0 didUpdateNeedsiTunesMultiUserRepair:(BOOL)arg1 ;


@end


#endif