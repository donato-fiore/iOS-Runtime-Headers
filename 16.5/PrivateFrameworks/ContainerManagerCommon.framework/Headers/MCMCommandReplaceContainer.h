// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDREPLACECONTAINER_H
#define MCMCOMMANDREPLACECONTAINER_H

@protocol MCMParametersReplace;


#import "MCMCommand.h"
#import "MCMConcreteContainerIdentity.h"

@interface MCMCommandReplaceContainer : MCMCommand <MCMParametersReplace>



@property (readonly, nonatomic) BOOL asyncReclaim; // ivar: _asyncReclaim
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew; // ivar: _containerIdentityNew
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld; // ivar: _containerIdentityOld
@property (readonly, nonatomic) BOOL preserveOldInternalUUID; // ivar: _preserveOldInternalUUID
@property (readonly, nonatomic) BOOL preserveOldPathIdentifier; // ivar: _preserveOldPathIdentifier


+(BOOL)recoverFromReplaceOperationsWithError:(*id)arg0 ;
+(Class)incomingMessageClass;
+(NSUInteger)command;
+(id)_readAndValidateReplaceFileAtUrl:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeToDiskReplaceAt:(id)arg0 old:(id)arg1 withNew:(id)arg2 usingStaging:(id)arg3 toDestination:(id)arg4 error:(*id)arg5 ;
-(BOOL)preflightClientAllowed;
-(id)initWithConcreteContainerIdentityOld:(id)arg0 concreteContainerIdentityNew:(id)arg1 preserveOldPathIdentifier:(BOOL)arg2 preserveOldInternalUUID:(BOOL)arg3 asyncReclaim:(BOOL)arg4 context:(id)arg5 resultPromise:(id)arg6 ;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif