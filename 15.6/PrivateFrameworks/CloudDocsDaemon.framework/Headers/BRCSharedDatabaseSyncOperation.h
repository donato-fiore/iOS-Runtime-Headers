// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSHAREDDATABASESYNCOPERATION_H
#define BRCSHAREDDATABASESYNCOPERATION_H

@class BRCOperation, NSString;
@protocol BRCOperationSubclass;


#import "BRCServerChangeState.h"

@interface BRCSharedDatabaseSyncOperation : BRCOperation <BRCOperationSubclass>

 {
    BRCServerChangeState *_changeState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *shareDBSyncCompletionBlock; // ivar: _shareDBSyncCompletionBlock
@property (readonly) Class superclass;


+(id)queue;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithSyncContext:(id)arg0 changeState:(id)arg1 group:(id)arg2 ;
-(void)_performAfterAddingOwnerKeysForZoneIDs:(id)arg0 block:(id)arg1 ;
-(void)_performAfterRegisteringForPushes:(id)arg0 ;
-(void)_performFetchChangedZones;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif