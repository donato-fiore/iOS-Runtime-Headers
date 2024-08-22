// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPBADDSHORTCUTEVENT_H
#define WFPBADDSHORTCUTEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBAddShortcutEvent : PBCodable <NSCopying>

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
@property (readonly, nonatomic) BOOL hasShortcutSource;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *shortcutSource; // ivar: _shortcutSource


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