// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSHARINGCOPYPARTICIPANTTOKENOPERATION_H
#define BRCSHARINGCOPYPARTICIPANTTOKENOPERATION_H

@class BRCFrameworkOperation, CKRecordID, NSString, NSError;
@protocol BRCOperationSubclass;



@interface BRCSharingCopyParticipantTokenOperation : BRCFrameworkOperation <BRCOperationSubclass>

 {
    CKRecordID *_shareID;
    CKRecordID *_contentRecordID;
    NSString *_participantDocumentToken;
    NSString *_participantKey;
    NSString *_baseToken;
    NSError *_error;
    BOOL _iWorkShareable;
    BOOL _isChildOfShare;
    BOOL _shouldFetchParticipantDocumentToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createActivity;
-(id)initWithItem:(id)arg0 ;
-(void)_completeWithResult:(id)arg0 participantKey:(id)arg1 ;
-(void)_fetchBaseTokenWithCompletion:(id)arg0 ;
-(void)_fetchParticipantDocumentTokenWithCompletion:(id)arg0 ;
-(void)_fetchParticipantKeyWithCompletion:(id)arg0 ;
-(void)main;


@end


#endif