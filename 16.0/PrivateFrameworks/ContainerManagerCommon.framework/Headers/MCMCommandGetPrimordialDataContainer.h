// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDGETPRIMORDIALDATACONTAINER_H
#define MCMCOMMANDGETPRIMORDIALDATACONTAINER_H

@protocol MCMParametersGetPrimordialDataContainer;


#import "MCMCommand.h"

@interface MCMCommandGetPrimordialDataContainer : MCMCommand <MCMParametersGetPrimordialDataContainer>



@property (readonly, nonatomic, getter=isExtension) BOOL extension; // ivar: _extension
@property (readonly, nonatomic) unsigned int platform; // ivar: _platform
@property (readonly, nonatomic) BOOL useCodeSignDatabase; // ivar: _useCodeSignDatabase


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif