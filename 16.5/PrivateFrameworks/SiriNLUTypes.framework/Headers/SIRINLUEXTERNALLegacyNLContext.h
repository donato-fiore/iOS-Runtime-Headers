// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALLEGACYNLCONTEXT_H
#define SIRINLUEXTERNALLEGACYNLCONTEXT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUEXTERNALLegacyNLContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL dictationPrompt; // ivar: _dictationPrompt
@property (nonatomic) BOOL hasDictationPrompt;
@property (nonatomic) BOOL hasLegacyContextSource;
@property (nonatomic) BOOL hasListenAfterSpeaking;
@property (readonly, nonatomic) BOOL hasPreviousDomainName;
@property (nonatomic) BOOL hasStrictPrompt;
@property (nonatomic) int legacyContextSource; // ivar: _legacyContextSource
@property (nonatomic) BOOL listenAfterSpeaking; // ivar: _listenAfterSpeaking
@property (retain, nonatomic) NSString *previousDomainName; // ivar: _previousDomainName
@property (retain, nonatomic) NSMutableArray *renderedTexts; // ivar: _renderedTexts
@property (nonatomic) BOOL strictPrompt; // ivar: _strictPrompt


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)legacyContextSourceAsString:(int)arg0 ;
-(id)renderedTextsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsLegacyContextSource:(id)arg0 ;
-(void)addRenderedTexts:(id)arg0 ;
-(void)clearRenderedTexts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif