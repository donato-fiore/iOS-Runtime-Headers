// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOPLUGINCONTROLREQUEST_H
#define IDSQRPROTOPLUGINCONTROLREQUEST_H

@class PBRequest, NSData, NSString;
@protocol NSCopying;



@interface IDSQRProtoPluginControlRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasPluginClientRawPublicKey;
@property (nonatomic) BOOL hasPluginStreamId;
@property (retain, nonatomic) NSData *pluginClientRawPublicKey; // ivar: _pluginClientRawPublicKey
@property (retain, nonatomic) NSString *pluginName; // ivar: _pluginName
@property (nonatomic) unsigned int pluginOperation; // ivar: _pluginOperation
@property (nonatomic) unsigned int pluginStreamId; // ivar: _pluginStreamId


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