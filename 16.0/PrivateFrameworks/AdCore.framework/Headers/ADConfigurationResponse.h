// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADCONFIGURATIONRESPONSE_H
#define ADCONFIGURATIONRESPONSE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ADConfigurationResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int bannerProxyType; // ivar: _bannerProxyType
@property (retain, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (nonatomic) BOOL hasBannerProxyType;
@property (readonly, nonatomic) BOOL hasConfigVersion;
@property (readonly, nonatomic) BOOL hasResourceConnectProxyURL;
@property (readonly, nonatomic) BOOL hasResourceProxyURL;
@property (retain, nonatomic) NSString *resourceConnectProxyURL; // ivar: _resourceConnectProxyURL
@property (retain, nonatomic) NSString *resourceProxyURL; // ivar: _resourceProxyURL
@property (retain, nonatomic) NSMutableArray *theConfigurations; // ivar: _theConfigurations


+(Class)theConfigurationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bannerProxyTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)theConfigurationAtIndex:(NSUInteger)arg0 ;
-(int)StringAsBannerProxyType:(id)arg0 ;
-(void)addTheConfiguration:(id)arg0 ;
-(void)clearTheConfigurations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif