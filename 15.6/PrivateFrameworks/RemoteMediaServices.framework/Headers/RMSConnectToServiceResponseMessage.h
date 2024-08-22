// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMSCONNECTTOSERVICERESPONSEMESSAGE_H
#define RMSCONNECTTOSERVICERESPONSEMESSAGE_H

@class PBCodable;
@protocol NSCopying;


#import "RMSControlInterfaceMessage.h"

@interface RMSConnectToServiceResponseMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) RMSControlInterfaceMessage *controlInterface; // ivar: _controlInterface
@property (readonly, nonatomic) BOOL hasControlInterface;
@property (nonatomic) BOOL hasResponseCode;
@property (nonatomic) BOOL hasResponseData;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int responseCode; // ivar: _responseCode
@property (nonatomic) int responseData; // ivar: _responseData
@property (nonatomic) int sessionIdentifier; // ivar: _sessionIdentifier


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