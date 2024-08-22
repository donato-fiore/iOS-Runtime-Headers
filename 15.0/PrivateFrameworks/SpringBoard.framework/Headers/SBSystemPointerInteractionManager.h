// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSYSTEMPOINTERINTERACTIONMANAGER_H
#define SBSYSTEMPOINTERINTERACTIONMANAGER_H

@class UIPointerInteraction, NSMapTable, UIView, NSString, UIWindow;
@protocol UIPointerInteractionDelegate;

#import <Foundation/Foundation.h>


@interface SBSystemPointerInteractionManager : NSObject <UIPointerInteractionDelegate>

 {
    UIPointerInteraction *_pointerInteraction;
    NSMapTable *_registeredViewsToDelegates;
}


@property (readonly, nonatomic) UIView *activePointerRegionView; // ivar: _activePointerRegionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIWindow *window; // ivar: _window


-(id)initWithPointerInteractionWindow:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)registerView:(id)arg0 delegate:(id)arg1 ;
-(void)unregisterView:(id)arg0 ;


@end


#endif