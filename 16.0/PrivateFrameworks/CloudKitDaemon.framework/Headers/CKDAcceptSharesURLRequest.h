// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDACCEPTSHARESURLREQUEST_H
#define CKDACCEPTSHARESURLREQUEST_H

@class NSMutableDictionary, NSArray;


#import "CKDURLRequest.h"

@interface CKDAcceptSharesURLRequest : CKDURLRequest

@property (copy, nonatomic) id *shareAcceptedBlock; // ivar: _shareAcceptedBlock
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID; // ivar: _shareMetadataByRequestID
@property (retain, nonatomic) NSArray *shareMetadatasToAccept; // ivar: _shareMetadatasToAccept


-(BOOL)handlesAnonymousCKUserIDPropagation;
-(BOOL)requiresCKAnonymousUserIDs;
-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 shareMetadatasToAccept:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)addSignatureForRequestOperation:(id)arg0 ;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif