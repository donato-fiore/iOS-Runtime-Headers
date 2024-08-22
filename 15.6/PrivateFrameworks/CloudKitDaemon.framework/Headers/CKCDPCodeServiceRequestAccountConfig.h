// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCDPCODESERVICEREQUESTACCOUNTCONFIG_H
#define CKCDPCODESERVICEREQUESTACCOUNTCONFIG_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CKCDPCodeServiceRequestAccountConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger accountFlags; // ivar: _accountFlags
@property (nonatomic) BOOL corporateSharingEnabled; // ivar: _corporateSharingEnabled
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (nonatomic) BOOL hasAccountFlags;
@property (nonatomic) BOOL hasCorporateSharingEnabled;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (nonatomic) BOOL hasLastWebActivityUTCMills;
@property (nonatomic) BOOL hasPhotosWebAccessTimestamp;
@property (nonatomic) NSInteger lastWebActivityUTCMills; // ivar: _lastWebActivityUTCMills
@property (nonatomic) NSInteger photosWebAccessTimestamp; // ivar: _photosWebAccessTimestamp


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