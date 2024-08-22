// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPTDOCKGESTUREINTERACTION_H
#define RPTDOCKGESTUREINTERACTION_H

@protocol RPTInteraction;

#import <Foundation/Foundation.h>


@interface RPTDockGestureInteraction : NSObject <RPTInteraction>



@property (nonatomic) CGFloat amplitude; // ivar: _amplitude
@property (nonatomic) NSUInteger gestureStyle; // ivar: _gestureStyle


-(id)initWithGestureStyle:(NSUInteger)arg0 ;
-(id)interactionByScalingBy:(CGFloat)arg0 ;
-(id)reversedInteraction;
-(void)invokeWithComposer:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif