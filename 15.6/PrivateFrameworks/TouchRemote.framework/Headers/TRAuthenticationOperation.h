// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRAUTHENTICATIONOPERATION_H
#define TRAUTHENTICATIONOPERATION_H

@class UIViewController, NSSet;


#import "TROperation.h"

@interface TRAuthenticationOperation : TROperation

@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (nonatomic) BOOL shouldForceInteractiveAuth; // ivar: _shouldForceInteractiveAuth
@property (nonatomic) BOOL shouldIgnoreAuthFailures; // ivar: _shouldIgnoreAuthFailures
@property (nonatomic) BOOL shouldUseAIDA; // ivar: _shouldUseAIDA
@property (retain, nonatomic) NSSet *targetedServices; // ivar: _targetedServices


-(void)execute;


@end


#endif