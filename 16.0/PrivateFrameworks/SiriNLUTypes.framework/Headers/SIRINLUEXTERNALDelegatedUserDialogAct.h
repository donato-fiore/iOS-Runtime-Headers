// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUEXTERNALDELEGATEDUSERDIALOGACT_H
#define SIRINLUEXTERNALDELEGATEDUSERDIALOGACT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALReferenceContext.h"
#import "SIRINLUEXTERNALRewriteMessage.h"
#import "SIRICOMMONStringValue.h"

@interface SIRINLUEXTERNALDelegatedUserDialogAct : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int asrHypothesisIndex; // ivar: _asrHypothesisIndex
@property (retain, nonatomic) NSString *externalParserId; // ivar: _externalParserId
@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (readonly, nonatomic) BOOL hasExternalParserId;
@property (readonly, nonatomic) BOOL hasReferenceContext;
@property (readonly, nonatomic) BOOL hasRewrite;
@property (readonly, nonatomic) BOOL hasRewrittenUtterance;
@property (retain, nonatomic) NSMutableArray *matchingSpans; // ivar: _matchingSpans
@property (retain, nonatomic) SIRINLUEXTERNALReferenceContext *referenceContext; // ivar: _referenceContext
@property (retain, nonatomic) SIRINLUEXTERNALRewriteMessage *rewrite; // ivar: _rewrite
@property (retain, nonatomic) SIRICOMMONStringValue *rewrittenUtterance; // ivar: _rewrittenUtterance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)matchingSpansAtIndex:(NSUInteger)arg0 ;
-(void)addMatchingSpans:(id)arg0 ;
-(void)clearMatchingSpans;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif