// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBWEBUSAGEEVENT_H
#define BMPBWEBUSAGEEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBWebUsageEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *applicationId; // ivar: _applicationId
@property (retain, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasApplicationId;
@property (readonly, nonatomic) BOOL hasDeviceId;
@property (nonatomic) BOOL hasIsUsageTrusted;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (nonatomic) BOOL hasUsageState;
@property (readonly, nonatomic) BOOL hasWebDomain;
@property (readonly, nonatomic) BOOL hasWebpageURL;
@property (nonatomic) BOOL isUsageTrusted; // ivar: _isUsageTrusted
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId
@property (nonatomic) int usageState; // ivar: _usageState
@property (retain, nonatomic) NSString *webDomain; // ivar: _webDomain
@property (retain, nonatomic) NSString *webpageURL; // ivar: _webpageURL


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)usageStateAsString:(int)arg0 ;
-(int)StringAsUsageState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif