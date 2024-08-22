// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDDAEMONINTERFACEFACTORY_H
#define EDDAEMONINTERFACEFACTORY_H


#import <Foundation/Foundation.h>

#import "EDCategorySubsystem.h"
#import "EDPersistence.h"

@interface EDDaemonInterfaceFactory : NSObject

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem; // ivar: _categorySubsystem
@property (readonly, nonatomic) EDPersistence *persistence; // ivar: _persistence


-(id)initWithPersistence:(id)arg0 categorySubsystem:(id)arg1 ;
-(id)newAccountRepository;
-(id)newActivityRegistry;
-(id)newClientResumerWithClientState:(id)arg0 ;
-(id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)arg0 ;
-(id)newFetchController;
-(id)newMailboxRepository;
-(id)newMessageRepositoryWithResumable:(id)arg0 ;
-(id)newOutgoingMessageRepository;
-(id)newSearchableIndex;
-(id)newSenderRepository;
-(id)newVIPManagerInterface;
-(id)sharedDonationController;
-(id)sharedInteractionLogger;
-(void)test_tearDown;


@end


#endif