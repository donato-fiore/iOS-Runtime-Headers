// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMCLOUDGADGETVIEWCONTROLLER_H
#define PXCMMCLOUDGADGETVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PXCMMCloudViewViewDelegate, PXGadget, PXCMMCloudGadgetViewControllerDelegate;


#import "PXCMMCloudView.h"
#import "PXGadgetSpec.h"

@interface PXCMMCloudGadgetViewController : UIViewController <PXCMMCloudViewViewDelegate, PXGadget>

 {
    BOOL _isCPLOn;
}


@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (retain, nonatomic) PXCMMCloudView *cloudView; // ivar: _cloudView
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCMMCloudGadgetViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableDismissAction;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (copy, nonatomic) NSString *gadgetTitle; // ivar: _gadgetTitle
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;


+(BOOL)didDismissCloudGadget;
+(id)_userDefaults;
+(void)setDidDismissCloudGadget:(BOOL)arg0 ;
-(id)contentViewController;
-(id)initWithSourceType:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_updateCPLStatus;
-(void)_updateContentInsets;
-(void)completeMyMomentCloudPhotoViewDismissTapped:(id)arg0 ;
-(void)completeMyMomentCloudPhotoViewLearnMoreTapped:(id)arg0 ;
-(void)completeMyMomentCloudPhotoViewSizeThatFitsDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif