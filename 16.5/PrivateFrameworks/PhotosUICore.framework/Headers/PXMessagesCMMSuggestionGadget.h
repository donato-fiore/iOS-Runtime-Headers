// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMESSAGESCMMSUGGESTIONGADGET_H
#define PXMESSAGESCMMSUGGESTIONGADGET_H

@class UIViewController, NSString;
@protocol PXGadget, PXMessagesCMMSuggestionGadgetActionDelegate, PXGadgetDelegate, PXCMMSuggestion;


#import "PXUpdater.h"
#import "PXCMMPosterHeaderView.h"
#import "PXRoundedCornerOverlayView.h"
#import "PXGadgetSpec.h"

@interface PXMessagesCMMSuggestionGadget : UIViewController <PXGadget>

 {
    PXUpdater *_updater;
    PXCMMPosterHeaderView *_posterHeaderView;
    PXRoundedCornerOverlayView *_roundedOverlayView;
}


@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (weak, nonatomic) NSObject<PXMessagesCMMSuggestionGadgetActionDelegate> *actionDelegate; // ivar: _actionDelegate
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (retain, nonatomic) NSObject<PXCMMSuggestion> *suggestion; // ivar: _suggestion
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;


-(id)contentViewController;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSuggestion:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_scheduleLayout;
-(void)_updatePosterHeaderView;
-(void)userDidSelectGadget;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif