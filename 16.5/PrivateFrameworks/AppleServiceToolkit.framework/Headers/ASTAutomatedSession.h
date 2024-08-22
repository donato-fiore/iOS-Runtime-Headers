// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTAUTOMATEDSESSION_H
#define ASTAUTOMATEDSESSION_H

@class NSString, NSDictionary;
@protocol ASTSessionSigningDelegate;

#import <Foundation/Foundation.h>

#import "ASTAuthInfoResult.h"
#import "ASTIdentity.h"
#import "ASTProfileResult.h"
#import "ASTSession.h"

@interface ASTAutomatedSession : NSObject <ASTSessionSigningDelegate>



@property (retain, nonatomic) ASTAuthInfoResult *authInfo; // ivar: _authInfo
@property (copy, nonatomic) id *authInfoHandler; // ivar: _authInfoHandler
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ASTIdentity *identity; // ivar: _identity
@property (retain, nonatomic) ASTProfileResult *profile; // ivar: _profile
@property (retain, nonatomic) ASTSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tests; // ivar: _tests


+(id)sessionWithIdentity:(id)arg0 profile:(id)arg1 tests:(id)arg2 authInfoHandler:(id)arg3 ;
+(id)sessionWithSerialNumber:(id)arg0 profile:(id)arg1 tests:(id)arg2 authInfoHandler:(id)arg3 ;
+(void)sessionExistsForIdentities:(id)arg0 ticketNumber:(id)arg1 completionHandler:(id)arg2 ;
+(void)sessionExistsForSerialNumbers:(id)arg0 ticketNumber:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithIdentity:(id)arg0 profile:(id)arg1 tests:(id)arg2 authInfoHandler:(id)arg3 ;
-(void)end;
-(void)executeWithCompletion:(id)arg0 ;
-(void)session:(id)arg0 cancelTest:(id)arg1 ;
-(void)session:(id)arg0 didEndWithError:(id)arg1 ;
-(void)session:(id)arg0 generateAuthInfoWithNonce:(id)arg1 ;
-(void)session:(id)arg0 profile:(id)arg1 filteredByComponents:(id)arg2 ;
-(void)session:(id)arg0 startTest:(id)arg1 parameters:(id)arg2 testResult:(id)arg3 ;


@end


#endif