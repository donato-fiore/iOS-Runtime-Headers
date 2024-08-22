// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUROTATIONCONTROLLER_H
#define SUROTATIONCONTROLLER_H


#import <Foundation/Foundation.h>

#import "SUViewController.h"

@interface SURotationController : NSObject

@property (nonatomic) SUViewController *viewController; // ivar: _viewController


-(BOOL)orientationAffectsViewFrame;
-(id)init;
-(id)initWithViewController:(id)arg0 ;
-(struct CGRect )viewFrameForInterfaceOrientation:(NSInteger)arg0 ;
-(void)animateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)dealloc;
-(void)finishRotationFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)prepareToRotateToInterfaceOrientation:(NSInteger)arg0 ;


@end


#endif