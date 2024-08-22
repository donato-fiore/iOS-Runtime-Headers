// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALQUERYREWRITEQRINTERACTION_H
#define SIRINLUINTERNALQUERYREWRITEQRINTERACTION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALQUERYREWRITEQRInteraction : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) BOOL hasTap2edit;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSMutableArray *originalUtterances; // ivar: _originalUtterances
@property (retain, nonatomic) NSMutableArray *siriResponses; // ivar: _siriResponses
@property (nonatomic) NSUInteger startTimestamp; // ivar: _startTimestamp
@property (nonatomic) BOOL tap2edit; // ivar: _tap2edit


+(Class)siriResponseType;
+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)originalUtterancesAtIndex:(NSUInteger)arg0 ;
-(id)siriResponseAtIndex:(NSUInteger)arg0 ;
-(void)addOriginalUtterances:(id)arg0 ;
-(void)addSiriResponse:(id)arg0 ;
-(void)clearOriginalUtterances;
-(void)clearSiriResponses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif