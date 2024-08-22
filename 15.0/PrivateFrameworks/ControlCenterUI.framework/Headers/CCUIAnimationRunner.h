// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUIANIMATIONRUNNER_H
#define CCUIANIMATIONRUNNER_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface CCUIAnimationRunner : NSObject {
    NSObject<OS_dispatch_group> *_previousAnimationGroup;
}




+(id)runner;
+(void)_runC2AnimationsInBatch:(id)arg0 animationGroup:(id)arg1 completionHandler:(id)arg2 ;
+(void)_runCAAnimationsInBatch:(id)arg0 animationGroup:(id)arg1 completionHandler:(id)arg2 ;
-(void)additivelyRunAnimationBatch:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)runAnimationBatch:(id)arg0 withCompletionBlock:(id)arg1 ;


@end


#endif