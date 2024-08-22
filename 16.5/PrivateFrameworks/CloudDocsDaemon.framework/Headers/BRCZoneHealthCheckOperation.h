// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCZONEHEALTHCHECKOPERATION_H
#define BRCZONEHEALTHCHECKOPERATION_H

@class BRCOperation, CKServerChangeToken, NSMutableDictionary, NSMutableArray, NSString;
@protocol BRCOperationSubclass;



@interface BRCZoneHealthCheckOperation : BRCOperation <BRCOperationSubclass>

 {
    CKServerChangeToken *_changeToken;
    NSMutableDictionary *_recordsByID;
    NSMutableArray *_deletedRecordIds;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithSession:(id)arg0 changeToken:(id)arg1 ;
-(void)completedZoneHealthSyncDownWithRequestID:(NSUInteger)arg0 error:(id)arg1 ;
-(void)main;
-(void)receivedUpdatedServerChangeToken:(id)arg0 requestID:(NSUInteger)arg1 ;


@end


#endif