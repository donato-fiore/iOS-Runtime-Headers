// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALSPANMATCHSPANMATCHREQUEST_H
#define SIRINLUINTERNALSPANMATCHSPANMATCHREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"
#import "SIRINLUEXTERNALNLContext.h"
#import "SIRINLUINTERNALTokenChain.h"

@interface SIRINLUINTERNALSPANMATCHSpanMatchRequest : PBRequest <NSCopying>



@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId; // ivar: _asrId
@property (readonly, nonatomic) BOOL hasAsrId;
@property (readonly, nonatomic) BOOL hasNlContext;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) SIRINLUEXTERNALNLContext *nlContext; // ivar: _nlContext
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // ivar: _tokenChain
@property (retain, nonatomic) NSString *utterance; // ivar: _utterance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif