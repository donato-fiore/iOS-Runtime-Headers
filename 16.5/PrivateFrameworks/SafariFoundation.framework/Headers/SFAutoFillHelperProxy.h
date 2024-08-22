// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAUTOFILLHELPERPROXY_H
#define SFAUTOFILLHELPERPROXY_H

@class NSXPCConnection, NSString;
@protocol SFAutoFillHelperProtocol;

#import <Foundation/Foundation.h>


@interface SFAutoFillHelperProxy : NSObject <SFAutoFillHelperProtocol>

 {
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg0 confirmPasswordRules:(id)arg1 overrideApplicationIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg0 confirmPasswordRules:(id)arg1 completion:(id)arg2 ;
-(void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg0 confirmPasswordRules:(id)arg1 overrideApplicationIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)getRemoteAutoFillAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)invalidate;


@end


#endif