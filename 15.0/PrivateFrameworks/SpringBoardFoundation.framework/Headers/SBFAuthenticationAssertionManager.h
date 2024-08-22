// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFAUTHENTICATIONASSERTIONMANAGER_H
#define SBFAUTHENTICATIONASSERTIONMANAGER_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBFAuthenticationAssertionTracker.h"

@interface SBFAuthenticationAssertionManager : NSObject <BSDescriptionProviding>

 {
    SBFAuthenticationAssertionTracker *_preventLockTracker;
    SBFAuthenticationAssertionTracker *_transientTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasActiveAssertions;
-(BOOL)isAssertionValid:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addAssertion:(id)arg0 ;
-(void)removeAssertion:(id)arg0 ;


@end


#endif