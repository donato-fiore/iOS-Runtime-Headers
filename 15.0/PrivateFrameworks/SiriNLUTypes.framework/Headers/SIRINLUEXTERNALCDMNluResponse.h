// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUEXTERNALCDMNLURESPONSE_H
#define SIRINLUEXTERNALCDMNLURESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALRequestID.h"
#import "SIRINLUEXTERNALResponseStatus.h"

@interface SIRINLUEXTERNALCDMNluResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) BOOL hasResponseStatus;
@property (retain, nonatomic) NSMutableArray *parses; // ivar: _parses
@property (retain, nonatomic) NSMutableArray *repetitionResults; // ivar: _repetitionResults
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *requestId; // ivar: _requestId
@property (retain, nonatomic) SIRINLUEXTERNALResponseStatus *responseStatus; // ivar: _responseStatus


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)parsesAtIndex:(NSUInteger)arg0 ;
-(id)repetitionResultsAtIndex:(NSUInteger)arg0 ;
-(void)addParses:(id)arg0 ;
-(void)addRepetitionResults:(id)arg0 ;
-(void)clearParses;
-(void)clearRepetitionResults;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif