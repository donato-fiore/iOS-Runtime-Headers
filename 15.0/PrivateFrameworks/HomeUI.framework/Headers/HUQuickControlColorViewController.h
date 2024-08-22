// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLCOLORVIEWCONTROLLER_H
#define HUQUICKCONTROLCOLORVIEWCONTROLLER_H

@class HFColorControlItem, NSString, NSIndexPath;
@protocol HUQuickControlColorInteractionCoordinatorDelegate;


#import "HUQuickControlSingleControlViewController.h"
#import "HUQuickControlColorViewController.h"
#import "HUQuickControlColorViewProfile.h"

@interface HUQuickControlColorViewController : HUQuickControlSingleControlViewController <HUQuickControlColorInteractionCoordinatorDelegate>



@property (retain, nonatomic) HUQuickControlColorViewController *colorViewController; // ivar: _colorViewController
@property (readonly, nonatomic) HFColorControlItem *controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (weak, nonatomic) HUQuickControlColorViewController *presentingColorViewController; // ivar: _presentingColorViewController
@property (retain, nonatomic) NSIndexPath *selectedColorIndexPath; // ivar: _selectedColorIndexPath
@property (readonly) Class superclass;
@property (readonly, nonatomic) HUQuickControlColorViewProfile *viewProfile;


-(NSUInteger)_paletteType;
-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(id)overrideStatusText;
-(struct CGSize )preferredContentSize;
-(void)cancelButtonTapped;
-(void)didSelectColorAtIndexPath:(id)arg0 ;
-(void)doneButtonTapped;
-(void)interactionCoordinator:(id)arg0 colorPaletteDidChange:(id)arg1 ;
-(void)interactionCoordinator:(id)arg0 didSelectColorAtIndexPath:(id)arg1 ;
-(void)interactionCoordinator:(id)arg0 viewValueDidChange:(id)arg1 ;
-(void)presentFullColorViewForInteractionCoordinator:(id)arg0 selectedColorIndexPath:(id)arg1 ;
-(void)quickControlItemUpdater:(id)arg0 didUpdateResultsForControlItems:(id)arg1 ;
-(void)updateValueFromControlItem;


@end


#endif