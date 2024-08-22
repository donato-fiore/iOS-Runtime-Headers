// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPINDOORWIFISCAN_H
#define CLPINDOORWIFISCAN_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CLPIndoorWifiScan : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat age; // ivar: _age
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) int channel; // ivar: _channel
@property (nonatomic) BOOL hasAge;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) int hidden; // ivar: _hidden
@property (retain, nonatomic) NSString *mac; // ivar: _mac
@property (nonatomic) int rssi; // ivar: _rssi
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


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