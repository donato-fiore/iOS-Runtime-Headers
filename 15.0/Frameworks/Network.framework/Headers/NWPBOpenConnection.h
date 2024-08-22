// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWPBOPENCONNECTION_H
#define NWPBOPENCONNECTION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NWPBEndpoint.h"
#import "NWPBParameters.h"

@interface NWPBOpenConnection : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *clientUUID; // ivar: _clientUUID
@property (retain, nonatomic) NWPBEndpoint *endpoint; // ivar: _endpoint
@property (readonly, nonatomic) BOOL hasClientUUID;
@property (readonly, nonatomic) BOOL hasEndpoint;
@property (readonly, nonatomic) BOOL hasParameters;
@property (retain, nonatomic) NWPBParameters *parameters; // ivar: _parameters


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