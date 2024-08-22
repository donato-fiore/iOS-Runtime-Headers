// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISPRINGBEHAVIOR_H
#define _UISPRINGBEHAVIOR_H



#import "UIDynamicBehavior.h"
#import "UIAttachmentBehavior.h"

@interface _UISpringBehavior : UIDynamicBehavior {
    UIAttachmentBehavior *_topLeft;
    UIAttachmentBehavior *_topRight;
    UIAttachmentBehavior *_bottomRight;
    UIAttachmentBehavior *_bottomLeft;
}


@property (nonatomic) CGPoint anchorPoint; // ivar: _anchorPoint
@property (nonatomic) CGFloat damping; // ivar: _damping
@property (nonatomic) CGFloat frequency; // ivar: _frequency


-(id)init;
-(id)initWithItem:(id)arg0 anchorPoint:(struct CGPoint )arg1 ;


@end


#endif