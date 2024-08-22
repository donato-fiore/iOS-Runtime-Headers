// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBENVELOPE_H
#define NTPBENVELOPE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NTPBEnvelope : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *content; // ivar: _content
@property (nonatomic) int contentType; // ivar: _contentType
@property (nonatomic) int contentTypeMinorVersion; // ivar: _contentTypeMinorVersion
@property (nonatomic) int contentTypePatchVersion; // ivar: _contentTypePatchVersion
@property (nonatomic) int contentTypeVersion; // ivar: _contentTypeVersion
@property (nonatomic) BOOL hasContentTypeMinorVersion;
@property (nonatomic) BOOL hasContentTypePatchVersion;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSData *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif