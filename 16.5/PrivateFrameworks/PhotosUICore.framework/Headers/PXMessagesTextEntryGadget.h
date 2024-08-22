// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMESSAGESTEXTENTRYGADGET_H
#define PXMESSAGESTEXTENTRYGADGET_H

@class UIViewController, UIView, UITextField, NSString;
@protocol PXGadget, PXGadgetDelegate;


#import "PXGadgetSpec.h"

@interface PXMessagesTextEntryGadget : UIViewController <PXGadget>

 {
    UIView *_containerView;
    UITextField *_textEntryField;
}


@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
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
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;


-(BOOL)hasLoadedContentData;
-(id)contentViewController;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_simulateMessage:(id)arg0 ;
-(void)_updateViewControllerInsets;
-(void)userDidSelectAccessoryButton:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif