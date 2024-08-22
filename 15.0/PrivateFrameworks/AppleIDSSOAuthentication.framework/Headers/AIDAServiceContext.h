// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AIDASERVICECONTEXT_H
#define AIDASERVICECONTEXT_H

@class NSDictionary, UIViewController;
@protocol NSMutableCopying, NSCopying, AASignInFlowControllerDelegate, AASignOutFlowControllerDelegate, CDPStateUIProvider;

#import <Foundation/Foundation.h>


@interface AIDAServiceContext : NSObject <NSMutableCopying, NSCopying>



@property (readonly, nonatomic) NSObject<AASignInFlowControllerDelegate> *aaSignInFlowControllerDelegate; // ivar: _aaSignInFlowControllerDelegate
@property (readonly, nonatomic) NSObject<AASignOutFlowControllerDelegate> *aaSignOutFlowControllerDelegate; // ivar: _aaSignOutFlowControllerDelegate
@property (readonly, copy, nonatomic) NSDictionary *authenticationResults; // ivar: _authenticationResults
@property (readonly, weak, nonatomic) NSObject<CDPStateUIProvider> *cdpUiProvider; // ivar: _cdpUiProvider
@property (readonly, nonatomic) NSInteger operationUIPermissions; // ivar: _operationUIPermissions
@property (readonly, nonatomic) BOOL shouldForceOperation; // ivar: _shouldForceOperation
@property (readonly, nonatomic) NSDictionary *signInContexts; // ivar: _signInContexts
@property (readonly, nonatomic) NSDictionary *signOutContexts; // ivar: _signOutContexts
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


+(BOOL)accessInstanceVariablesDirectly;
+(id)contextWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif