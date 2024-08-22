// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCDPCODESERVICEREQUESTSERVICECLIENTCONFIG_H
#define CKCDPCODESERVICEREQUESTSERVICECLIENTCONFIG_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasHost;
@property (nonatomic) BOOL hasPort;
@property (nonatomic) BOOL hasUseTls;
@property (retain, nonatomic) NSString *host; // ivar: _host
@property (nonatomic) unsigned int port; // ivar: _port
@property (nonatomic) BOOL useTls; // ivar: _useTls


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