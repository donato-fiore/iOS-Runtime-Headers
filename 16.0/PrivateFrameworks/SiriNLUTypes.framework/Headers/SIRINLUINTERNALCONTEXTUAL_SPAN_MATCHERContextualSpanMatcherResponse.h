// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERCONTEXTUALSPANMATCHERRESPONSE_H
#define SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERCONTEXTUALSPANMATCHERRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALCONTEXTUAL_SPAN_MATCHERContextualSpanMatcherResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *contextualSpans; // ivar: _contextualSpans


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contextualSpansAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContextualSpans:(id)arg0 ;
-(void)clearContextualSpans;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif