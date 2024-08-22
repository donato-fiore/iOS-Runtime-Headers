// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCDPCODESERVICEREQUESTCLIENTCONFIG_H
#define CKCDPCODESERVICEREQUESTCLIENTCONFIG_H

@class PBCodable;
@protocol NSCopying;


#import "CKCDPCodeServiceRequestServiceClientConfig.h"

@interface CKCDPCodeServiceRequestClientConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKCDPCodeServiceRequestServiceClientConfig *config; // ivar: _config
@property (readonly, nonatomic) BOOL hasConfig;
@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int serviceType; // ivar: _serviceType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)serviceTypeAsString:(int)arg0 ;
-(int)StringAsServiceType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif