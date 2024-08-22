// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIINTERACTIVEHIGHLIGHTEFFECT_H
#define _UIINTERACTIVEHIGHLIGHTEFFECT_H


#import <Foundation/Foundation.h>

#import "UIVisualEffectView.h"
#import "_UIInteractiveHighlightEnvironment.h"
#import "_UIPortalView.h"
#import "UIView.h"

@interface _UIInteractiveHighlightEffect : NSObject

@property (weak, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (retain, nonatomic) _UIInteractiveHighlightEnvironment *environment; // ivar: _environment
@property (weak, nonatomic) _UIPortalView *portalView; // ivar: _portalView
@property (nonatomic) UIEdgeInsets preferredContentInsets; // ivar: _preferredContentInsets
@property (weak, nonatomic) UIView *superview; // ivar: _superview
@property (weak, nonatomic) UIView *view; // ivar: _view


-(void)applyBackgroundEffectWithMagnitude:(CGFloat)arg0 interactive:(BOOL)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)finalizeEffect;


@end


#endif