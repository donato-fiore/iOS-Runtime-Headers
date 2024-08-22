// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPWIFIAPLOCATION_H
#define CLPWIFIAPLOCATION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CLPLocation.h"

@interface CLPWifiAPLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (nonatomic) int channel; // ivar: _channel
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hasScanTimestamp;
@property (nonatomic) BOOL hasScanType;
@property (nonatomic) BOOL hasServerHash;
@property (nonatomic) int hidden; // ivar: _hidden
@property (retain, nonatomic) CLPLocation *location; // ivar: _location
@property (retain, nonatomic) NSString *mac; // ivar: _mac
@property (nonatomic) int rssi; // ivar: _rssi
@property (nonatomic) CGFloat scanTimestamp; // ivar: _scanTimestamp
@property (nonatomic) int scanType; // ivar: _scanType
@property (nonatomic) int serverHash; // ivar: _serverHash


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)scanTypeAsString:(int)arg0 ;
-(int)StringAsScanType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif