// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DESSYSTEMTELEMETRYRESPONSE_H
#define DESSYSTEMTELEMETRYRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface DESSystemTelemetryResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger createTimeUtc; // ivar: _createTimeUtc
@property (retain, nonatomic) NSString *deviceLocale; // ivar: _deviceLocale
@property (retain, nonatomic) NSString *deviceOs; // ivar: _deviceOs
@property (retain, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (nonatomic) BOOL hasCreateTimeUtc;
@property (readonly, nonatomic) BOOL hasDeviceLocale;
@property (readonly, nonatomic) BOOL hasDeviceOs;
@property (readonly, nonatomic) BOOL hasDeviceType;
@property (readonly, nonatomic) BOOL hasPlugin;
@property (nonatomic) BOOL hasRecordCount;
@property (retain, nonatomic) NSString *plugin; // ivar: _plugin
@property (nonatomic) NSUInteger recordCount; // ivar: _recordCount


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