// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPONENTHOSTINGVIEW_H
#define CKCOMPONENTHOSTINGVIEW_H

@class UIView, NSSet, NSString;
@protocol CKComponentStateListener, CKComponentDebugReflowListener, CKComponentSizeRangeProviding, CKComponentHostingViewDelegate;


#import "CKComponent.h"

@interface CKComponentHostingView : UIView <CKComponentStateListener, CKComponentDebugReflowListener>

 {
    Class _componentProvider;
    id<CKComponentSizeRangeProviding> *_sizeRangeProvider;
    CKComponentHostingViewInputs _pendingInputs;
    CKComponentBoundsAnimation _boundsAnimation;
    CKComponent *_component;
    BOOL _componentNeedsUpdate;
    NSUInteger _requestedUpdateMode;
    CKComponentLayout _mountedLayout;
    NSSet *_mountedComponents;
    BOOL _scheduledAsynchronousComponentUpdate;
    BOOL _isSynchronouslyUpdatingComponent;
    BOOL _isMountingComponent;
}


@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKComponentHostingViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mountedLayout;
-(id)initWithComponentProvider:(Class)arg0 sizeRangeProvider:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyResult:(struct CKBuildComponentResult *)arg0 ;
-(void)_asynchronouslyUpdateComponentIfNeeded;
-(void)_scheduleAsynchronousUpdate;
-(void)_setNeedsUpdateWithMode:(NSUInteger)arg0 ;
-(void)_synchronouslyUpdateComponentIfNeeded;
// -(void)componentScopeHandleWithIdentifier:(int)arg0 rootIdentifier:(int)arg1 didReceiveStateUpdate:(id)arg2 mode:(unk)arg3  ;
-(void)dealloc;
-(void)didReceiveReflowComponentsRequest;
-(void)layoutSubviews;
-(void)updateContext:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)updateModel:(id)arg0 mode:(NSUInteger)arg1 ;


@end


#endif