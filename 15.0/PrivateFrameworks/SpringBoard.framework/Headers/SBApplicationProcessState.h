// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATIONPROCESSSTATE_H
#define SBAPPLICATIONPROCESSSTATE_H

@class FBApplicationProcess, FBProcessState, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBApplicationProcessState : NSObject <BSDescriptionProviding>

 {
    FBApplicationProcess *_process;
    FBProcessState *_processState;
    BOOL _isBeingDebugged;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBeingDebugged;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger taskState;
@property (readonly, nonatomic) NSInteger visibility;


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithProcess:(id)arg0 stateSnapshot:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif