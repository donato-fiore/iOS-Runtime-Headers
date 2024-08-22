// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDANONYMOUSSHAREADDURLREQUEST_H
#define CKDANONYMOUSSHAREADDURLREQUEST_H

@class NSMutableDictionary, NSDictionary;


#import "CKDURLRequest.h"

@interface CKDAnonymousShareAddURLRequest : CKDURLRequest

@property (copy, nonatomic) id *anonymousShareSavedBlock; // ivar: _anonymousShareSavedBlock
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToAddByRequestID; // ivar: _encryptedAnonymousShareHashToAddByRequestID
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd; // ivar: _encryptedAnonymousSharesToAdd


-(BOOL)requiresCKAnonymousUserIDs;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 encryptedAnonymousSharesToAdd:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;


@end


#endif