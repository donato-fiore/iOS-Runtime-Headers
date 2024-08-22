// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSTHROUGHVIEW_H
#define PKPASSTHROUGHVIEW_H

@class UIView;


#import "PKPassthroughView.h"

@interface PKPassthroughView : UIView {
    BOOL _inHitTest;
}


@property (nonatomic, getter=isHitTestEnabled) BOOL hitTestEnabled; // ivar: _hitTestEnabled
@property (nonatomic) BOOL inPortalHitTest; // ivar: _inPortalHitTest
@property (weak, nonatomic) PKPassthroughView *portal; // ivar: _portal
@property (nonatomic, getter=isPortalled) BOOL portalled; // ivar: _portalled


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif