// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFAUTHENTICATIONASSERTION_H
#define SBFAUTHENTICATIONASSERTION_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBFUserAuthenticationController.h"

@interface SBFAuthenticationAssertion : NSObject <BSDescriptionProviding>

 {
    BOOL _activated;
    BOOL _invalidated;
}


@property (readonly, weak, nonatomic) SBFUserAuthenticationController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSInteger)arg1 withController:(id)arg2 ;
-(id)publicDescription;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif