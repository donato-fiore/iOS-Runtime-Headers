// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLCOLORINTERACTIONCOORDINATOR_H
#define HUQUICKCONTROLCOLORINTERACTIONCOORDINATOR_H

@class HFColorPalette, NSString;
@protocol HUQuickControlColorViewInteractionDelegate, HUQuickControlColorInteractionCoordinatorDelegate;


#import "HUQuickControlSimpleInteractionCoordinator.h"
#import "HUQuickControlColorView.h"

@interface HUQuickControlColorInteractionCoordinator : HUQuickControlSimpleInteractionCoordinator <HUQuickControlColorViewInteractionDelegate>



@property (retain, nonatomic) HFColorPalette *colorPalette; // ivar: _colorPalette
@property (readonly, nonatomic) HUQuickControlColorView *controlView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUQuickControlColorInteractionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasPendingColorPaletteChangeDelegateNotification; // ivar: _hasPendingColorPaletteChangeDelegateNotification
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithControlView:(id)arg0 colorPalette:(id)arg1 delegate:(id)arg2 ;
-(void)_notifyDelegateOfColorPaletteChangeIfNecessary;
-(void)cancelButtonTappedToDismissColorViewController;
-(void)controlView:(id)arg0 colorPaletteDidChange:(id)arg1 ;
-(void)controlView:(id)arg0 didSelectColorAtIndexPath:(id)arg1 ;
-(void)controlView:(id)arg0 interactionStateDidChange:(BOOL)arg1 forFirstTouch:(BOOL)arg2 ;
-(void)controlView:(id)arg0 showAuxiliaryView:(id)arg1 ;
-(void)hideAuxiliaryViewForControlView:(id)arg0 ;
-(void)presentFullColorViewForControlView:(id)arg0 selectedColorIndexPath:(id)arg1 ;


@end


#endif