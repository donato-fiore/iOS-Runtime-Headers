// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPLATTERMENUSNAPBEHAVIOR_H
#define _UIPLATTERMENUSNAPBEHAVIOR_H



#import "UIDynamicBehavior.h"
#import "UIAttachmentBehavior.h"

@interface _UIPlatterMenuSnapBehavior : UIDynamicBehavior {
    UIAttachmentBehavior *_spring1;
    UIAttachmentBehavior *_spring2;
}


@property (nonatomic) CGPoint anchorPoint;
@property (nonatomic) CGFloat damping;
@property (nonatomic) CGFloat frequency;


-(id)initWithItem:(id)arg0 attachedToAnchor:(struct CGPoint )arg1 ;


@end


#endif