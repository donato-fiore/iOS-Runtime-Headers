// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUICDPHELPER_H
#define AAUICDPHELPER_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface AAUICDPHelper : NSObject

@property (nonatomic) BOOL forceInline; // ivar: _forceInline
@property (readonly, weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController


+(id)cdpContextForAccount:(id)arg0 ;
+(id)cdpContextForPrimaryAccount;
+(id)cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg0 ;
+(id)helperWithPresenter:(id)arg0 ;
-(id)cdpStateControllerForPrimaryAccount;
-(id)cdpStateControllerWithContext:(id)arg0 ;


@end


#endif