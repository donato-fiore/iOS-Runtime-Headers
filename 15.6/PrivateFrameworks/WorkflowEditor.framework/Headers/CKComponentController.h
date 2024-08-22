// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPONENTCONTROLLER_H
#define CKCOMPONENTCONTROLLER_H

@class UIView;

#import <Foundation/Foundation.h>

#import "CKComponent.h"

@interface CKComponentController : NSObject {
    NSUInteger _state;
    BOOL _updatingComponent;
    BOOL _performedInitialMount;
    CKComponent *_previousComponent;
    CKComponentControllerAnimationWrapper _animationData;
}


@property (readonly, weak, nonatomic) CKComponent *component; // ivar: _component
@property (readonly, nonatomic) UIView *view; // ivar: _view


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)initWithComponent:(id)arg0 ;
-(id)nextResponder;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)_cleanupAppliedAnimations;
-(void)_relinquishView;
-(void)component:(id)arg0 didAcquireView:(id)arg1 ;
-(void)component:(id)arg0 willRelinquishView:(id)arg1 ;
-(void)componentDidMount:(id)arg0 ;
-(void)componentDidUnmount:(id)arg0 ;
-(void)componentWillMount:(id)arg0 ;
-(void)componentWillUnmount:(id)arg0 ;
-(void)didMount;
-(void)didRemount;
-(void)didUnmount;
-(void)didUpdateComponent;
-(void)willMount;
-(void)willRemount;
-(void)willUnmount;
-(void)willUpdateComponent;


@end


#endif