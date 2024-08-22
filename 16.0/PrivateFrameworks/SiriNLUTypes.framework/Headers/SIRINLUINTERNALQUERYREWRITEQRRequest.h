// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALQUERYREWRITEQRREQUEST_H
#define SIRINLUINTERNALQUERYREWRITEQRREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALRequestID.h"
#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALQUERYREWRITEQRRequest : PBRequest <NSCopying>



@property (retain, nonatomic) SIRINLUEXTERNALRequestID *cdmRequestId; // ivar: _cdmRequestId
@property (readonly, nonatomic) BOOL hasCdmRequestId;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) NSMutableArray *interactions; // ivar: _interactions
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId; // ivar: _nluRequestId
@property (retain, nonatomic) NSMutableArray *originalInteractions; // ivar: _originalInteractions
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // ivar: _requestId
@property (retain, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)interactionsAtIndex:(NSUInteger)arg0 ;
-(id)originalInteractionsAtIndex:(NSUInteger)arg0 ;
-(void)addInteractions:(id)arg0 ;
-(void)addOriginalInteractions:(id)arg0 ;
-(void)clearInteractions;
-(void)clearOriginalInteractions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif