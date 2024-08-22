// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERVIEWCONTROLLERANIMATIONCOORDINATOR_H
#define AVPLAYERVIEWCONTROLLERANIMATIONCOORDINATOR_H

@class NSMutableArray, NSString;
@protocol AVPlayerViewControllerAnimationCoordinator;

#import <Foundation/Foundation.h>


@interface AVPlayerViewControllerAnimationCoordinator : NSObject <AVPlayerViewControllerAnimationCoordinator>



@property (readonly, nonatomic) NSMutableArray *animations; // ivar: _animations
@property (readonly, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
// -(void)addCoordinatedAnimations:(id)arg0 completion:(unk)arg1  ;
-(void)didFinishAnimations:(BOOL)arg0 ;
-(void)performCoordinatedAnimations;


@end


#endif