// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITRANSITIONSTATE_H
#define _UITRANSITIONSTATE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _UITransitionState : NSObject {
    id *_completion;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSDate *beginDate; // ivar: _beginDate
@property (readonly, nonatomic) NSInteger effectiveTransitionDirection;
@property (readonly, nonatomic) NSInteger transitionDirection; // ivar: _transitionDirection


-(BOOL)isCompatibleWithTransitionInDirection:(NSInteger)arg0 ;
-(id)description;
-(id)initWithTransitionDirection:(NSInteger)arg0 completion:(id)arg1 ;
-(void)cleanupWithFinishedState:(BOOL)arg0 completedState:(BOOL)arg1 ;
-(void)markBeginDate;


@end


#endif