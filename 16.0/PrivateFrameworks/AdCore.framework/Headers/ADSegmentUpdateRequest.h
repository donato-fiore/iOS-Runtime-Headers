// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADSEGMENTUPDATEREQUEST_H
#define ADSEGMENTUPDATEREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface ADSegmentUpdateRequest : PBRequest <NSCopying>

 {
    ? _accountStates;
    ? _accountTypes;
    ? _deviceModes;
    ? _has;
}


@property (readonly, nonatomic) *int accountStates;
@property (readonly, nonatomic) NSUInteger accountStatesCount;
@property (readonly, nonatomic) *int accountTypes;
@property (readonly, nonatomic) NSUInteger accountTypesCount;
@property (retain, nonatomic) NSString *advertisingIdentifier; // ivar: _advertisingIdentifier
@property (nonatomic) int advertisingIdentifierMonthResetCount; // ivar: _advertisingIdentifierMonthResetCount
@property (retain, nonatomic) NSData *dPID; // ivar: _dPID
@property (readonly, nonatomic) *int deviceModes;
@property (readonly, nonatomic) NSUInteger deviceModesCount;
@property (readonly, nonatomic) BOOL hasAdvertisingIdentifier;
@property (nonatomic) BOOL hasAdvertisingIdentifierMonthResetCount;
@property (readonly, nonatomic) BOOL hasDPID;
@property (readonly, nonatomic) BOOL hasIAdID;
@property (nonatomic) BOOL hasITunesRefreshTime;
@property (nonatomic) BOOL hasIsFirstPartyIdentifier;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (readonly, nonatomic) BOOL hasOsVersionAndBuild;
@property (readonly, nonatomic) BOOL hasSegmentInfo;
@property (nonatomic) BOOL hasTimezone;
@property (nonatomic) BOOL hasUpdateSentTime;
@property (retain, nonatomic) NSData *iAdID; // ivar: _iAdID
@property (nonatomic) CGFloat iTunesRefreshTime; // ivar: _iTunesRefreshTime
@property (nonatomic) BOOL isFirstPartyIdentifier; // ivar: _isFirstPartyIdentifier
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (retain, nonatomic) NSString *osVersionAndBuild; // ivar: _osVersionAndBuild
@property (retain, nonatomic) NSString *segmentInfo; // ivar: _segmentInfo
@property (nonatomic) float timezone; // ivar: _timezone
@property (nonatomic) CGFloat updateSentTime; // ivar: _updateSentTime


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)accountStatesAsString:(int)arg0 ;
-(id)accountTypesAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceModesAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(int)StringAsAccountStates:(id)arg0 ;
-(int)StringAsAccountTypes:(id)arg0 ;
-(int)StringAsDeviceModes:(id)arg0 ;
-(int)accountStateAtIndex:(NSUInteger)arg0 ;
-(int)accountTypeAtIndex:(NSUInteger)arg0 ;
-(int)deviceModeAtIndex:(NSUInteger)arg0 ;
-(void)addAccountState:(int)arg0 ;
-(void)addAccountType:(int)arg0 ;
-(void)addDeviceMode:(int)arg0 ;
-(void)clearAccountStates;
-(void)clearAccountTypes;
-(void)clearDeviceModes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif