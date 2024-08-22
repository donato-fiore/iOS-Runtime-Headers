// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPBGALLERYSESSIONENDEVENT_H
#define WFPBGALLERYSESSIONENDEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBGallerySessionEndEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


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