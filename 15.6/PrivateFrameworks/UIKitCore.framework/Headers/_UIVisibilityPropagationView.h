// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVISIBILITYPROPAGATIONVIEW_H
#define _UIVISIBILITYPROPAGATIONVIEW_H

@class RBSTarget, NSString, BSServiceConnectionEndpointInjector, NSMutableArray;


#import "UIView.h"

@interface _UIVisibilityPropagationView : UIView {
    os_unfair_lock_s _visibilityLock;
    RBSTarget *_visibilityLock_target;
    BOOL _visibilityLock_enabled;
    NSString *_visibilityLock_sourceEnvironment;
    BOOL _visibilityLock_updateEnqueued;
    os_unfair_lock_s _visibilityProcessingLock;
    RBSTarget *_visibilityProcessingLock_target;
    NSString *_visibilityProcessingLock_sourceEnvironment;
    BSServiceConnectionEndpointInjector *_visibilityProcessingLock_endpointInjector;
    NSMutableArray *_windowChangeNotifications;
}


@property (nonatomic, getter=isVisibilityPropagationEnabled) BOOL visibilityPropagationEnabled;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateVisibility;
-(void)_visibilityLock_enqueueUpdateIfNecessary;
-(void)_visibilityLock_enqueueUpdateIfNecessary_body;
-(void)_visibilityLock_setSource:(id)arg0 ;
-(void)_visibilityLock_updateVisibility;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setHidden:(BOOL)arg0 ;
-(void)setVisibilityTarget:(id)arg0 ;


@end


#endif