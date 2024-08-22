// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDINITIATEPARTICIPANTVETTINGURLREQUEST_H
#define CKDINITIATEPARTICIPANTVETTINGURLREQUEST_H

@class NSString, NSData, CKRecordID;


#import "CKDURLRequest.h"

@interface CKDInitiateParticipantVettingURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *baseToken; // ivar: _baseToken
@property (copy, nonatomic) NSData *encryptedKey; // ivar: _encryptedKey
@property (copy, nonatomic) NSString *participantID; // ivar: _participantID
@property (copy, nonatomic) CKRecordID *shareRecordID; // ivar: _shareRecordID
@property (copy, nonatomic) id *vettingInitiationRequestCompletionBlock; // ivar: _vettingInitiationRequestCompletionBlock


-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 shareRecordID:(id)arg1 encryptedKey:(id)arg2 participantID:(id)arg3 baseToken:(id)arg4 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif