// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKPRIVATEDELETEALLZONESUBSCRIPTIONSOPERATION_H
#define FCCKPRIVATEDELETEALLZONESUBSCRIPTIONSOPERATION_H



#import "FCCKPrivateDatabaseOperation.h"

@interface FCCKPrivateDeleteAllZoneSubscriptionsOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) id *deleteAllZoneSubscriptionsCompletionBlock; // ivar: _deleteAllZoneSubscriptionsCompletionBlock


-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif