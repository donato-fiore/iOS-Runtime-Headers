// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMEDIAGROUPPROTOMEDIADESTINATION_H
#define HMMEDIAGROUPPROTOMEDIADESTINATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMMediaGroupProtoMediaDestination : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *audioGroupIdentifier; // ivar: _audioGroupIdentifier
@property (readonly, nonatomic) BOOL hasAudioGroupIdentifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (nonatomic) BOOL hasSupportedOptions;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *parentIdentifier; // ivar: _parentIdentifier
@property (nonatomic) NSUInteger supportedOptions; // ivar: _supportedOptions


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