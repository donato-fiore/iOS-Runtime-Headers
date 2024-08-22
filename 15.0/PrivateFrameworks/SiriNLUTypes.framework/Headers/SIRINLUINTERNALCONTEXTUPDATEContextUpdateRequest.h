// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUINTERNALCONTEXTUPDATECONTEXTUPDATEREQUEST_H
#define SIRINLUINTERNALCONTEXTUPDATECONTEXTUPDATEREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALTurnInput.h"
#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALCONTEXTUPDATEContextUpdateRequest : PBRequest <NSCopying>



@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurn; // ivar: _currentTurn
@property (readonly, nonatomic) BOOL hasCurrentTurn;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) BOOL hasResultCandidateId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId; // ivar: _nluRequestId
@property (retain, nonatomic) NSMutableArray *previousTurns; // ivar: _previousTurns
@property (retain, nonatomic) NSMutableArray *qrHypotheses; // ivar: _qrHypotheses
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // ivar: _requestId
@property (retain, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)previousTurnsAtIndex:(NSUInteger)arg0 ;
-(id)qrHypothesesAtIndex:(NSUInteger)arg0 ;
-(void)addPreviousTurns:(id)arg0 ;
-(void)addQrHypotheses:(id)arg0 ;
-(void)clearPreviousTurns;
-(void)clearQrHypotheses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif