// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSSCENEACTIVITYSESSION_H
#define FBSSCENEACTIVITYSESSION_H

@class NSString;
@protocol BSDescriptionProviding, FBSProcess, FBSSceneHandle;

#import <Foundation/Foundation.h>

#import "FBSProcessAssertion.h"
#import "FBSProcessWatchdog.h"
#import "FBSProcessExecutionPolicy.h"

@interface FBSSceneActivitySession : NSObject <BSDescriptionProviding>

 {
    id *_errorHandler;
    id<FBSProcess> *_process;
    FBSProcessAssertion *_assertion;
    FBSProcessWatchdog *_watchdog;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorHandler;
@property (copy, nonatomic) FBSProcessExecutionPolicy *executionPolicy; // ivar: _executionPolicy
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (weak, nonatomic) NSObject<FBSSceneHandle> *scene; // ivar: _scene
@property (readonly) Class superclass;


-(BOOL)_isValid;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithName:(id)arg0 scene:(id)arg1 executionPolicy:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)close;
-(void)dealloc;
-(void)invalidate;
-(void)open;


@end


#endif