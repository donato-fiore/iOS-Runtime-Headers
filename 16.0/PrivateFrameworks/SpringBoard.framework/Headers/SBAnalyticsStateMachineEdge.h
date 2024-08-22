// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBANALYTICSSTATEMACHINEEDGE_H
#define SBANALYTICSSTATEMACHINEEDGE_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBAnalyticsStateMachineEdge : NSObject <BSDescriptionProviding>

 {
    id *_transition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fromState; // ivar: _fromState
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)edgeFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 uponEvent:(NSUInteger)arg2 ;
+(id)edgeFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 uponGestureState:(NSInteger)arg2 ;
+(id)edgeFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 uponGestureState:(NSInteger)arg2 andDo:(id)arg3 ;
+(id)edgeFromState:(NSUInteger)arg0 transition:(id)arg1 ;
-(NSUInteger)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithFromState:(NSUInteger)arg0 transition:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif