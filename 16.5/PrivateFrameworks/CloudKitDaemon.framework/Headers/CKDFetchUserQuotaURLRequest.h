// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDFETCHUSERQUOTAURLREQUEST_H
#define CKDFETCHUSERQUOTAURLREQUEST_H



#import "CKDURLRequest.h"

@interface CKDFetchUserQuotaURLRequest : CKDURLRequest

@property (copy, nonatomic) id *quotaFetchedBlock; // ivar: _quotaFetchedBlock


-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif