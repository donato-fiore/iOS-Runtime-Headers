// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLCOLLECTIONVIEWCELLCONTAINERVIEWCONTROLLER_H
#define HUQUICKCONTROLCOLLECTIONVIEWCELLCONTAINERVIEWCONTROLLER_H

@class UIViewController;


#import "HUQuickControlViewController.h"
#import "HUQuickControlCollectionViewCellContainerView.h"

@interface HUQuickControlCollectionViewCellContainerViewController : UIViewController

@property (readonly, nonatomic) HUQuickControlViewController *contentViewController; // ivar: _contentViewController
@property (nonatomic) UIEdgeInsets preferredContentLayoutFrameInset; // ivar: _preferredContentLayoutFrameInset
@property (nonatomic) NSUInteger titlePosition; // ivar: _titlePosition
@property (retain, nonatomic) HUQuickControlCollectionViewCellContainerView *view;
@property (readonly, nonatomic) HUQuickControlCollectionViewCellContainerView *viewIfLoaded;


+(id)intrinsicSizeDescriptorControlSizeDescriptor:(id)arg0 titlePosition:(NSUInteger)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithContentViewController:(id)arg0 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif