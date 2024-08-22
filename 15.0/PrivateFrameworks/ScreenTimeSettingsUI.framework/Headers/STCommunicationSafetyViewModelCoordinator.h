// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCOMMUNICATIONSAFETYVIEWMODELCOORDINATOR_H
#define STCOMMUNICATIONSAFETYVIEWMODELCOORDINATOR_H

@class NSString;
@protocol STCommunicationSafetyViewModelCoordinator, STGroupFetchedResultsControllerDelegate;

#import <Foundation/Foundation.h>

#import "STCommunicationSafetyViewModel.h"

@interface STCommunicationSafetyViewModelCoordinator : NSObject <STCommunicationSafetyViewModelCoordinator, STGroupFetchedResultsControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) STCommunicationSafetyViewModel *viewModel; // ivar: _viewModel


-(id)initWithPersistenceController:(id)arg0 userDSID:(id)arg1 ;
-(id)initWithPersistenceController:(id)arg0 userDSID:(id)arg1 modelUpdatedHandler:(id)arg2 ;
-(void)persistCommunicationSafetySettingsWithCompletionHandler:(id)arg0 ;


@end


#endif