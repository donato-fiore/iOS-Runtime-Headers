// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWPBENDPOINT_H
#define NWPBENDPOINT_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "NWPBAddressEndpoint.h"
#import "NWPBHostEndpoint.h"
#import "NWPBInterface.h"
#import "NWPBServiceEndpoint.h"

@interface NWPBEndpoint : PBCodable <NSCopying>



@property (retain, nonatomic) NWPBAddressEndpoint *address; // ivar: _address
@property (readonly, nonatomic) BOOL hasAddress;
@property (readonly, nonatomic) BOOL hasHost;
@property (readonly, nonatomic) BOOL hasInterface;
@property (readonly, nonatomic) BOOL hasService;
@property (readonly, nonatomic) BOOL hasTxtRecord;
@property (retain, nonatomic) NWPBHostEndpoint *host; // ivar: _host
@property (retain, nonatomic) NWPBInterface *interface; // ivar: _interface
@property (retain, nonatomic) NWPBServiceEndpoint *service; // ivar: _service
@property (retain, nonatomic) NSData *txtRecord; // ivar: _txtRecord


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