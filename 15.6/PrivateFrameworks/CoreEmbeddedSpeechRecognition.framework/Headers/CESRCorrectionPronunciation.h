// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CESRCORRECTIONPRONUNCIATION_H
#define CESRCORRECTIONPRONUNCIATION_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface CESRCorrectionPronunciation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *apgId; // ivar: _apgId
@property (retain, nonatomic) NSData *asrPronunciationData; // ivar: _asrPronunciationData
@property (readonly, nonatomic) BOOL hasApgId;
@property (readonly, nonatomic) BOOL hasAsrPronunciationData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasOrthography;
@property (nonatomic) BOOL hasTokenOffset;
@property (readonly, nonatomic) BOOL hasTtsVersion;
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *orthography; // ivar: _orthography
@property (nonatomic) int tokenOffset; // ivar: _tokenOffset
@property (retain, nonatomic) NSMutableArray *ttsPronunciations; // ivar: _ttsPronunciations
@property (retain, nonatomic) NSString *ttsVersion; // ivar: _ttsVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)ttsPronunciationsAtIndex:(NSUInteger)arg0 ;
-(void)addTtsPronunciations:(id)arg0 ;
-(void)clearTtsPronunciations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif