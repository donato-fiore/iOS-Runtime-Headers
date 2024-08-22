// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUEXTERNALDELEGATEDUSERDIALOGACT_H
#define SIRINLUEXTERNALDELEGATEDUSERDIALOGACT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SIRICOMMONStringValue.h"

@interface SIRINLUEXTERNALDelegatedUserDialogAct : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int asrHypothesisIndex; // ivar: _asrHypothesisIndex
@property (retain, nonatomic) NSString *externalParserId; // ivar: _externalParserId
@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (readonly, nonatomic) BOOL hasExternalParserId;
@property (readonly, nonatomic) BOOL hasRewrittenUtterance;
@property (retain, nonatomic) SIRICOMMONStringValue *rewrittenUtterance; // ivar: _rewrittenUtterance


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