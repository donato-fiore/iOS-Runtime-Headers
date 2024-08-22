// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCSYNCDOWNOPERATION_H
#define BRCSYNCDOWNOPERATION_H

@class BRCOperation, NSString;
@protocol BRCOperationSubclass;


#import "BRCServerZone.h"

@interface BRCSyncDownOperation : BRCOperation <BRCOperationSubclass>

 {
    BRCServerZone *_serverZone;
    NSUInteger _editedAndDeletedRecordsCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleZoneNotFoundIfSyncingDownForTheFirstTime:(id)arg0 ;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithServerZone:(id)arg0 ;
-(void)_performAfterFetchingRecordChanges:(id)arg0 ;
-(void)_startCreateZoneAndSubscriptionAndSyncDown;
-(void)_startSyncDown;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif