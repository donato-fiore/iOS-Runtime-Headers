// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICIAMSERIALCHECKREQUEST_H
#define ICIAMSERIALCHECKREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface ICIAMSerialCheckRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger dSID; // ivar: _dSID
@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (nonatomic) BOOL hasDSID;
@property (readonly, nonatomic) BOOL hasDeviceID;


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