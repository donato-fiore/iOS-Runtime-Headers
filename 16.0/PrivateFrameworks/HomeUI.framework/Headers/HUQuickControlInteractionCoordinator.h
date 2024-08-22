// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLINTERACTIONCOORDINATOR_H
#define HUQUICKCONTROLINTERACTIONCOORDINATOR_H

@class UIView<HUQuickControlControllableView>;
@protocol HUQuickControlInteractionCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface HUQuickControlInteractionCoordinator : NSObject

@property (readonly, nonatomic) UIView<HUQuickControlControllableView> *controlView; // ivar: _controlView
@property (weak, nonatomic) NSObject<HUQuickControlInteractionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (retain, nonatomic) id *value;
@property (nonatomic) BOOL viewVisible; // ivar: _viewVisible


-(id)initWithControlView:(id)arg0 delegate:(id)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)recordInteractionStart;


@end


#endif