// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBASEWINDOWSCENESTATUSBARCHANGEASSERTION_H
#define SBBASEWINDOWSCENESTATUSBARCHANGEASSERTION_H

@class NSString;
@protocol SBWindowSceneStatusBarAssertion;

#import <Foundation/Foundation.h>

#import "SBWindowSceneStatusBarAssertionManager.h"

@interface SBBaseWindowSceneStatusBarChangeAssertion : NSObject <SBWindowSceneStatusBarAssertion>

 {
    SBWindowSceneStatusBarAssertionManager *_assertionManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)_initWithWindowSceneStatusBarAssertionManager:(id)arg0 reason:(id)arg1 ;
-(id)init;
-(void)invalidate;


@end


#endif