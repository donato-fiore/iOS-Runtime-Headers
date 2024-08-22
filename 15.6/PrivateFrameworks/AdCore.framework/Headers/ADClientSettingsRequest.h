// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADCLIENTSETTINGSREQUEST_H
#define ADCLIENTSETTINGSREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;



@interface ADClientSettingsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *currentSearchLandingAdsSettingParams; // ivar: _currentSearchLandingAdsSettingParams
@property (retain, nonatomic) NSMutableArray *currentSettingParams; // ivar: _currentSettingParams
@property (readonly, nonatomic) BOOL hasIAdIDString;
@property (retain, nonatomic) NSString *iAdIDString; // ivar: _iAdIDString


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentSearchLandingAdsSettingParamsAtIndex:(NSUInteger)arg0 ;
-(id)currentSettingParamsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCurrentSearchLandingAdsSettingParams:(id)arg0 ;
-(void)addCurrentSettingParams:(id)arg0 ;
-(void)clearCurrentSearchLandingAdsSettingParams;
-(void)clearCurrentSettingParams;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif