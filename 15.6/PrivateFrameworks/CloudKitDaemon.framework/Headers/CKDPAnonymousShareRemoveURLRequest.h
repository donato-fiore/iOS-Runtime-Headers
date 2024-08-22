// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPANONYMOUSSHAREREMOVEURLREQUEST_H
#define CKDPANONYMOUSSHAREREMOVEURLREQUEST_H

@class NSMutableDictionary, NSDictionary;


#import "CKDURLRequest.h"

@interface CKDPAnonymousShareRemoveURLRequest : CKDURLRequest

@property (copy, nonatomic) id *anonymousShareRemovedBlock; // ivar: _anonymousShareRemovedBlock
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToRemoveByRequestID; // ivar: _encryptedAnonymousShareHashToRemoveByRequestID
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove; // ivar: _encryptedAnonymousSharesToRemove


-(BOOL)requiresCKAnonymousUserIDs;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 encryptedAnonymousSharesToRemove:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;


@end


#endif