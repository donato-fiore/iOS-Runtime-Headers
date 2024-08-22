// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDUSERMANAGEDASSETSPATH_H
#define MCMCOMMANDUSERMANAGEDASSETSPATH_H

@protocol MCMParametersUserManagedAssetsPath;


#import "MCMCommand.h"
#import "MCMContainerIdentity.h"

@interface MCMCommandUserManagedAssetsPath : MCMCommand <MCMParametersUserManagedAssetsPath>



@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity; // ivar: _containerIdentity
@property (readonly, nonatomic) BOOL createIfNecessary; // ivar: _createIfNecessary
@property (readonly, nonatomic, getter=isRelative) BOOL relative; // ivar: _relative


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif