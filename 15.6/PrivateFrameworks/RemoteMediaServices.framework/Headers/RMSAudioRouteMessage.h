// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMSAUDIOROUTEMESSAGE_H
#define RMSAUDIOROUTEMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface RMSAudioRouteMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasMacAddress;
@property (nonatomic) BOOL hasSelected;
@property (nonatomic) BOOL hasSupportsVideo;
@property (nonatomic) NSInteger macAddress; // ivar: _macAddress
@property (nonatomic) BOOL selected; // ivar: _selected
@property (nonatomic) BOOL supportsVideo; // ivar: _supportsVideo


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