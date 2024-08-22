// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSEARCHREWRITTENQUERYNONPAYLOADFIELD_H
#define GEOPDSEARCHREWRITTENQUERYNONPAYLOADFIELD_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOPDSearchRewrittenQueryNonPayloadField : PBCodable <NSCopying>

 {
    NSString *_rewrittenQuery;
    int _pipelineType;
    BOOL _hasCamelCase;
    BOOL _hasDirectionsIntent;
    BOOL _hasEmojiRewrite;
    BOOL _hasNumericSplit;
    BOOL _hasSynonymCounterpart;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif