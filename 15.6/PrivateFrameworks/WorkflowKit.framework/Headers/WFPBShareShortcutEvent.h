// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPBSHARESHORTCUTEVENT_H
#define WFPBSHARESHORTCUTEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBShareShortcutEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int actionCount; // ivar: _actionCount
@property (retain, nonatomic) NSString *addToSiriBundleIdentifier; // ivar: _addToSiriBundleIdentifier
@property (retain, nonatomic) NSString *galleryIdentifier; // ivar: _galleryIdentifier
@property (nonatomic) BOOL hasActionCount;
@property (readonly, nonatomic) BOOL hasAddToSiriBundleIdentifier;
@property (readonly, nonatomic) BOOL hasGalleryIdentifier;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSharingDestinationBundleIdentifier;
@property (readonly, nonatomic) BOOL hasSharingMode;
@property (nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *sharingDestinationBundleIdentifier; // ivar: _sharingDestinationBundleIdentifier
@property (retain, nonatomic) NSString *sharingMode; // ivar: _sharingMode
@property (nonatomic) int source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sourceAsString:(int)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif