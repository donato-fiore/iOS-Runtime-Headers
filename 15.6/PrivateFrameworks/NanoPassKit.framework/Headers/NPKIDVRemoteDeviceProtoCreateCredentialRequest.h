// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKIDVREMOTEDEVICEPROTOCREATECREDENTIALREQUEST_H
#define NPKIDVREMOTEDEVICEPROTOCREATECREDENTIALREQUEST_H

@class PBRequest, NSData, NSString;
@protocol NSCopying;



@interface NPKIDVRemoteDeviceProtoCreateCredentialRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *credentialOptionsData; // ivar: _credentialOptionsData
@property (readonly, nonatomic) BOOL hasCredentialOptionsData;
@property (readonly, nonatomic) BOOL hasPartitionIdentifier;
@property (retain, nonatomic) NSString *partitionIdentifier; // ivar: _partitionIdentifier


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