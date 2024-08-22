// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDDATAMIGRATION_H
#define MCMCOMMANDDATAMIGRATION_H



#import "MCMCommand.h"

@interface MCMCommandDataMigration : MCMCommand



+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)_performBundleContainerOwnershipMigrationWithError:(*id)arg0 ;
-(BOOL)_performInternalACLMigrationWithError:(*id)arg0 ;
-(BOOL)preflightClientAllowed;
-(void)execute;


@end


#endif