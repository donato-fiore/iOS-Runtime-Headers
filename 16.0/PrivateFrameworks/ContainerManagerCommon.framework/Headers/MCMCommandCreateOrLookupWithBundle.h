// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDCREATEORLOOKUPWITHBUNDLE_H
#define MCMCOMMANDCREATEORLOOKUPWITHBUNDLE_H

@class NSURL;
@protocol MCMParametersCreateOrLookupWithBundle;


#import "MCMCommand.h"

@interface MCMCommandCreateOrLookupWithBundle : MCMCommand <MCMParametersCreateOrLookupWithBundle>



@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic) BOOL createIfNecessary; // ivar: _createIfNecessary
@property (readonly, nonatomic) NSURL *executableURL; // ivar: _executableURL
@property (readonly, nonatomic) BOOL issueSandboxExtension; // ivar: _issueSandboxExtension
@property (readonly, nonatomic) char * sandboxToken; // ivar: _sandboxToken
@property (readonly, nonatomic) BOOL transient; // ivar: _transient


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif