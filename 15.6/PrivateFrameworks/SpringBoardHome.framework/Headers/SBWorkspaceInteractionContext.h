// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWORKSPACEINTERACTIONCONTEXT_H
#define SBWORKSPACEINTERACTIONCONTEXT_H

@class UIGestureRecognizer, UIInteractionProgress;

#import <Foundation/Foundation.h>


@interface SBWorkspaceInteractionContext : NSObject

@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly, nonatomic) UIInteractionProgress *interactionProgress; // ivar: _interactionProgress


-(id)initWithGestureRecognizer:(id)arg0 ;
-(id)initWithInteractionProgress:(id)arg0 ;


@end


#endif