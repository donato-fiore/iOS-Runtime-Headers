// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSIDECARSYNCDOWNOPERATION_H
#define BRCSIDECARSYNCDOWNOPERATION_H

@class BRCOperation, CKServerChangeToken, NSString;
@protocol BRCOperationSubclass;



@interface BRCSideCarSyncDownOperation : BRCOperation <BRCOperationSubclass>

 {
    CKServerChangeToken *_serverChangeToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithSession:(id)arg0 changeToken:(id)arg1 ;
-(void)_createSyncDownOperation;
-(void)_createZone;
-(void)_saveChangedRecords:(id)arg0 deletedRecords:(id)arg1 serverChangeToken:(id)arg2 clientChangeToken:(id)arg3 ;
-(void)main;


@end


#endif