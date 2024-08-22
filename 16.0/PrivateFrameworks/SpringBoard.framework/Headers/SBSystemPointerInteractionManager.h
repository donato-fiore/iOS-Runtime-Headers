// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMPOINTERINTERACTIONMANAGER_H
#define SBSYSTEMPOINTERINTERACTIONMANAGER_H

@class NSMapTable, UIView, NSString;
@protocol UIPointerInteractionDelegate;

#import <Foundation/Foundation.h>


@interface SBSystemPointerInteractionManager : NSObject <UIPointerInteractionDelegate>

 {
    NSMapTable *_registeredViewsToDelegates;
}


@property (readonly, nonatomic) UIView *activePointerRegionView; // ivar: _activePointerRegionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isViewRegistered:(id)arg0 ;
-(id)init;
-(id)pointerInteraction:(id)arg0 window:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)pointerInteraction:(id)arg0 window:(id)arg1 styleForRegion:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 window:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)pointerInteraction:(id)arg0 window:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(void)registerView:(id)arg0 delegate:(id)arg1 ;
-(void)unregisterView:(id)arg0 ;


@end


#endif