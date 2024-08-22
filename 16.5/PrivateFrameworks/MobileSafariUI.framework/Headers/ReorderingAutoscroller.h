// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REORDERINGAUTOSCROLLER_H
#define REORDERINGAUTOSCROLLER_H

@class CADisplayLink;
@protocol ReorderingAutoscrollerDelegate;

#import <Foundation/Foundation.h>


@interface ReorderingAutoscroller : NSObject {
    CADisplayLink *_displayLink;
    CGPoint _offsetError;
    CGPoint _velocity;
}


@property (nonatomic) UIEdgeInsets autoscrollInsets; // ivar: _autoscrollInsets
@property (weak, nonatomic) NSObject<ReorderingAutoscrollerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat maximumSpeed; // ivar: _maximumSpeed
@property (nonatomic) CGRect scrollableRect; // ivar: _scrollableRect


-(id)init;
-(void)_autoscroll:(id)arg0 ;
-(void)_setVelocity:(struct CGPoint )arg0 ;
-(void)beginInteraction;
-(void)dealloc;
-(void)endInteraction;
-(void)updateInteractionAtPoint:(struct CGPoint )arg0 ;


@end


#endif