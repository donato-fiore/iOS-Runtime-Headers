// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NMRMEDIAREMOTEGETICONMESSAGE_H
#define _NMRMEDIAREMOTEGETICONMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _NMRMediaRemoteGetIconMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) BOOL hasBundleID;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat width; // ivar: _width


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