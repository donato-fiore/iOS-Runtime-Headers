// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDROPANIMATIONHANDLERS_H
#define _UIDROPANIMATIONHANDLERS_H

@class NSMutableArray, NSArray, NSString;
@protocol UIDragAnimating;

#import <Foundation/Foundation.h>


@interface _UIDropAnimationHandlers : NSObject <UIDragAnimating>

 {
    NSMutableArray *_alongsideAnimationHandlers;
    NSMutableArray *_completionHandlers;
}


@property (readonly, nonatomic) NSArray *alongsideAnimationHandlers;
@property (readonly, nonatomic) NSArray *completionHandlers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)invokeAllCompletionHandlers;
-(void)resetAllAnimationHandlers;


@end


#endif