// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFSIMPLEANIMATIONCOORDINATOR_H
#define MFSIMPLEANIMATIONCOORDINATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MFSimpleAnimationCoordinator : NSObject

@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (retain, nonatomic) NSMutableArray *animations; // ivar: _animations
@property (retain, nonatomic) NSMutableArray *completions; // ivar: _completions


-(id)init;
-(id)initCoordinatorAnimated:(BOOL)arg0 ;
// -(void)animateAlongsideAnimations:(id)arg0 completion:(unk)arg1  ;
-(void)playAnimations;
-(void)playCompletions:(BOOL)arg0 ;


@end


#endif