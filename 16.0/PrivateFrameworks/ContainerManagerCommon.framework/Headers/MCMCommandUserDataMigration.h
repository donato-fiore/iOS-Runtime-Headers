// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCOMMANDUSERDATAMIGRATION_H
#define MCMCOMMANDUSERDATAMIGRATION_H



#import "MCMCommand.h"

@interface MCMCommandUserDataMigration : MCMCommand



+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)_bundleContainerExistsForDataContainer:(id)arg0 error:(*id)arg1 ;
-(BOOL)preflightClientAllowed;
-(int)_intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)arg0 ;
-(void)_setDataProtectionIfNecessaryOnContainer:(id)arg0 ;
-(void)execute;


@end


#endif