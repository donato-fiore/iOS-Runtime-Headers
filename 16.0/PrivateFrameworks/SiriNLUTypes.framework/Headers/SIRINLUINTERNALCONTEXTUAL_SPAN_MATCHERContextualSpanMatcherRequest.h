// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERCONTEXTUALSPANMATCHERREQUEST_H
#define SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERCONTEXTUALSPANMATCHERREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "SIRINLUEXTERNALNLContext.h"
#import "SIRINLUEXTERNALUUID.h"
#import "SIRINLUEXTERNALRequestID.h"
#import "SIRINLUINTERNALTokenChain.h"

@interface SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasNlContext;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) SIRINLUEXTERNALNLContext *nlContext; // ivar: _nlContext
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId; // ivar: _nluRequestId
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *requestId; // ivar: _requestId
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // ivar: _tokenChain


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