// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUEXTERNALCDMNLUREQUEST_H
#define SIRINLUEXTERNALCDMNLUREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALTurnInput.h"
#import "SIRINLUEXTERNALRequestID.h"

@interface SIRINLUEXTERNALCDMNluRequest : PBRequest <NSCopying>



@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurnInput; // ivar: _currentTurnInput
@property (readonly, nonatomic) BOOL hasCurrentTurnInput;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSMutableArray *previousTurnInputs; // ivar: _previousTurnInputs
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *requestId; // ivar: _requestId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)previousTurnInputsAtIndex:(NSUInteger)arg0 ;
-(void)addPreviousTurnInputs:(id)arg0 ;
-(void)clearPreviousTurnInputs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif