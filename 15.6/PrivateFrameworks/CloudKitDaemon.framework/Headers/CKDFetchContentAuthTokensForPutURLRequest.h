// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFETCHCONTENTAUTHTOKENSFORPUTURLREQUEST_H
#define CKDFETCHCONTENTAUTHTOKENSFORPUTURLREQUEST_H

@class NSDictionary, NSMapTable;


#import "CKDURLRequest.h"
#import "CKDAssetTokenRequest.h"

@interface CKDFetchContentAuthTokensForPutURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest; // ivar: _assetTokenRequest
@property (retain, nonatomic) NSDictionary *headers; // ivar: _headers
@property (retain, nonatomic) NSMapTable *transactionStateByRequestIDs; // ivar: _transactionStateByRequestIDs
@property (nonatomic) BOOL useEncryption; // ivar: _useEncryption


-(BOOL)allowsAnonymousAccount;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 assetTokenRequest:(id)arg1 headers:(id)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif