// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDDECLINESHARESURLREQUEST_H
#define CKDDECLINESHARESURLREQUEST_H

@class NSMutableDictionary, NSArray;


#import "CKDURLRequest.h"

@interface CKDDeclineSharesURLRequest : CKDURLRequest

@property (copy, nonatomic) id *shareDeclinedBlock; // ivar: _shareDeclinedBlock
@property (retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID; // ivar: _shareMetadataByRequestID
@property (retain, nonatomic) NSArray *shareMetadatasToDecline; // ivar: _shareMetadatasToDecline


-(id)generateRequestOperations;
-(id)initWithOperation:(id)arg0 shareMetadatasToDecline:(id)arg1 ;
-(id)requestDidParseProtobufObject:(id)arg0 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg0 ;


@end


#endif