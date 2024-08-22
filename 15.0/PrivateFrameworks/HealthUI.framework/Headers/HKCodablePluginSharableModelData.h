// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCODABLEPLUGINSHARABLEMODELDATA_H
#define HKCODABLEPLUGINSHARABLEMODELDATA_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface HKCodablePluginSharableModelData : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasSourceLocaleIdentifier;
@property (readonly, nonatomic) BOOL hasSourceTimeZoneIdentifier;
@property (readonly, nonatomic) BOOL hasUserData;
@property (retain, nonatomic) NSString *sourceLocaleIdentifier; // ivar: _sourceLocaleIdentifier
@property (retain, nonatomic) NSString *sourceTimeZoneIdentifier; // ivar: _sourceTimeZoneIdentifier
@property (retain, nonatomic) NSData *userData; // ivar: _userData


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