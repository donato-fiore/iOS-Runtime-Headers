// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSTHROUGHVIEW_H
#define PKPASSTHROUGHVIEW_H

@class UIView;


#import "PKPassthroughView.h"

@interface PKPassthroughView : UIView {
    BOOL _inHitTest;
    BOOL _inPortalHitTest;
    NSUInteger _portalTargetCount;
}


@property (nonatomic, getter=isHitTestEnabled) BOOL hitTestEnabled; // ivar: _hitTestEnabled
@property (weak, nonatomic) PKPassthroughView *portal; // ivar: _portal
@property (readonly, nonatomic, getter=isPortalled) BOOL portalled;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;


@end


#endif