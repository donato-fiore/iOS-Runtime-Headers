// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIDAMUTABLESERVICECONTEXT_H
#define AIDAMUTABLESERVICECONTEXT_H

@class NSDictionary, UIViewController;
@protocol AASignInFlowControllerDelegate, AASignOutFlowControllerDelegate, CDPStateUIProvider;


#import "AIDAServiceContext.h"

@interface AIDAMutableServiceContext : AIDAServiceContext

@property (retain, nonatomic) NSObject<AASignInFlowControllerDelegate> *aaSignInFlowControllerDelegate;
@property (retain, nonatomic) NSObject<AASignOutFlowControllerDelegate> *aaSignOutFlowControllerDelegate;
@property (copy, nonatomic) NSDictionary *authenticationResults;
@property (weak, nonatomic) NSObject<CDPStateUIProvider> *cdpUiProvider;
@property (nonatomic) NSInteger operationUIPermissions;
@property (nonatomic) BOOL shouldForceOperation;
@property (retain, nonatomic) NSDictionary *signInContexts;
@property (retain, nonatomic) NSDictionary *signOutContexts;
@property (retain, nonatomic) UIViewController *viewController;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif