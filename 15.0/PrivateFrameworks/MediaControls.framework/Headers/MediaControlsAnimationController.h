// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSANIMATIONCONTROLLER_H
#define MEDIACONTROLSANIMATIONCONTROLLER_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface MediaControlsAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

 {
    BOOL _presenting;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initForPresenting:(BOOL)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif