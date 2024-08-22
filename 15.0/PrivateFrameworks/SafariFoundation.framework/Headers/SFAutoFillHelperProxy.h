// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(void)dealloc;
-(void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg0 confirmPasswordRules:(id)arg1 completion:(id)arg2 ;
-(void)getRemoteAutoFillAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)invalidate;


@end


#endif