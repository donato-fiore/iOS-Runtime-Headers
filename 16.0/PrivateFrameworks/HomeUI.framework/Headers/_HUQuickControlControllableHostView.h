// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HUQUICKCONTROLCONTROLLABLEHOSTVIEW_H
#define _HUQUICKCONTROLCONTROLLABLEHOSTVIEW_H

@class UIView, MTMaterialView, NSString;
@protocol HUQuickControlInteractiveView, HUQuickControlViewInteractionDelegate;


#import "HUQuickControlViewProfile.h"

@interface _HUQuickControlControllableHostView : UIView <HUQuickControlInteractiveView>



@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HUQuickControlViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (copy, nonatomic) HUQuickControlViewProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger reachabilityState;
@property (retain, nonatomic) id *secondaryValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (retain, nonatomic) id *value; // ivar: _value


-(id)initWithProfile:(id)arg0 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;


@end


#endif