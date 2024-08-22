// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBSHARESHEETEXPOSURE_H
#define NTPBSHARESHEETEXPOSURE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBShareSheetExposure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *contentId; // ivar: _contentId
@property (nonatomic) int contentType; // ivar: _contentType
@property (readonly, nonatomic) BOOL hasContentId;
@property (nonatomic) BOOL hasContentType;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (nonatomic) BOOL hasShareSheetExposureLocation;
@property (retain, nonatomic) NSString *referencedArticleId; // ivar: _referencedArticleId
@property (nonatomic) int shareSheetExposureLocation; // ivar: _shareSheetExposureLocation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsContentType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif