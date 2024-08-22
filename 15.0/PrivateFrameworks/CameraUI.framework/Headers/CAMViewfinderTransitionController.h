// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMVIEWFINDERTRANSITIONCONTROLLER_H
#define CAMVIEWFINDERTRANSITIONCONTROLLER_H

@protocol CAMViewfinderTransitionable;

#import <Foundation/Foundation.h>

#import "CAMViewfinderFlipTransition.h"
#import "CAMViewfinderOpenAndCloseTransition.h"

@interface CAMViewfinderTransitionController : NSObject

@property (retain, nonatomic, setter=_setFlipTransition:) CAMViewfinderFlipTransition *_flipTransition; // ivar: __flipTransition
@property (retain, nonatomic, setter=_setOpenAndCloseTransition:) CAMViewfinderOpenAndCloseTransition *_openAndCloseTransition; // ivar: __openAndCloseTransition
@property (weak, nonatomic) NSObject<CAMViewfinderTransitionable> *target; // ivar: _target


-(void)closeAndRotateWithDirection:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)closeWithBlur:(BOOL)arg0 animated:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)handleApplicationDidEnterBackground;
-(void)openForReason:(NSInteger)arg0 animated:(BOOL)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif