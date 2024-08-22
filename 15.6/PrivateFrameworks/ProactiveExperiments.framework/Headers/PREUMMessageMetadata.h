// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PREUMMESSAGEMETADATA_H
#define PREUMMESSAGEMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PREUMMessageMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int ageGroup; // ivar: _ageGroup
@property (nonatomic) unsigned int charCount; // ivar: _charCount
@property (nonatomic) BOOL hasAgeGroup;
@property (nonatomic) BOOL hasCharCount;
@property (nonatomic) BOOL hasHasQuestionMark;
@property (readonly, nonatomic) BOOL hasHostProcess;
@property (nonatomic) BOOL hasIsApricotDevice;
@property (readonly, nonatomic) BOOL hasLang;
@property (readonly, nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL hasQuestionMark; // ivar: _hasQuestionMark
@property (retain, nonatomic) NSString *hostProcess; // ivar: _hostProcess
@property (nonatomic) BOOL isApricotDevice; // ivar: _isApricotDevice
@property (retain, nonatomic) NSString *lang; // ivar: _lang
@property (retain, nonatomic) NSString *locale; // ivar: _locale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)ageGroupAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAgeGroup:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif