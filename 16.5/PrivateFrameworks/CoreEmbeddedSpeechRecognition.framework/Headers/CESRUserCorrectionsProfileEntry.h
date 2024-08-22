// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CESRUSERCORRECTIONSPROFILEENTRY_H
#define CESRUSERCORRECTIONSPROFILEENTRY_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CESRCorrectionPronunciation.h"

@interface CESRUserCorrectionsProfileEntry : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int alternativesCorrectionsCount; // ivar: _alternativesCorrectionsCount
@property (retain, nonatomic) NSString *correctedText; // ivar: _correctedText
@property (nonatomic) BOOL hasAlternativesCorrectionsCount;
@property (readonly, nonatomic) BOOL hasCorrectedText;
@property (readonly, nonatomic) BOOL hasPronunciationData;
@property (nonatomic) BOOL hasSpellingCorrectionsCount;
@property (nonatomic) BOOL hasTap2editCorrectionsCount;
@property (retain, nonatomic) CESRCorrectionPronunciation *pronunciationData; // ivar: _pronunciationData
@property (nonatomic) unsigned int spellingCorrectionsCount; // ivar: _spellingCorrectionsCount
@property (nonatomic) unsigned int tap2editCorrectionsCount; // ivar: _tap2editCorrectionsCount


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