// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMESSAGESRECENTPHOTOSGADGET_H
#define PXMESSAGESRECENTPHOTOSGADGET_H

@class NSString, UIViewController<PXPhotoLibraryPresenting>;
@protocol PXGadget, PXGadgetDelegate;

#import <Foundation/Foundation.h>

#import "PXGadgetSpec.h"

@interface PXMessagesRecentPhotosGadget : NSObject <PXGadget>



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
@property (nonatomic) CGFloat preferredHeight; // ivar: _preferredHeight
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController; // ivar: _recentPhotosViewController
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;


-(id)contentViewController;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateViewControllerInsets;
-(void)userDidSelectAccessoryButton:(id)arg0 ;


@end


#endif