// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDFETCHWEBAUTHTOKENURLREQUEST_H
#define CKDFETCHWEBAUTHTOKENURLREQUEST_H

@class NSString;


#import "CKDURLRequest.h"

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *APIToken; // ivar: _APIToken
@property (copy, nonatomic) id *tokenFetchedBlock; // ivar: _tokenFetchedBlock


-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif