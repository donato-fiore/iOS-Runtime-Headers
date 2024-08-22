// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIUSAGEBSSDETAILS_H
#define WIFIUSAGEBSSDETAILS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiUsageBssDetails : NSObject <NSCopying>



@property (nonatomic) NSInteger apMode; // ivar: _apMode
@property (copy, nonatomic) NSString *apProfile; // ivar: _apProfile
@property (copy, nonatomic) NSString *bssid; // ivar: _bssid
@property (nonatomic) NSInteger channel; // ivar: _channel
@property (nonatomic) NSInteger channelWidth; // ivar: _channelWidth
@property (copy, nonatomic) NSString *deviceVersion; // ivar: _deviceVersion
@property (nonatomic) BOOL hasAppleIE; // ivar: _hasAppleIE
@property (nonatomic) BOOL hasDomainName; // ivar: _hasDomainName
@property (nonatomic) BOOL hasInterworkingIE; // ivar: _hasInterworkingIE
@property (nonatomic) BOOL hasNaiRealms; // ivar: _hasNaiRealms
@property (nonatomic) BOOL hasRoamingOis; // ivar: _hasRoamingOis
@property (nonatomic) BOOL hasWpsIE; // ivar: _hasWpsIE
@property (nonatomic) BOOL isEdgeBss; // ivar: _isEdgeBss
@property (nonatomic) CGFloat locationLatitude; // ivar: _locationLatitude
@property (nonatomic) CGFloat locationLongitude; // ivar: _locationLongitude
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSString *modelNumber; // ivar: _modelNumber
@property (nonatomic) NSUInteger networkAccessCode; // ivar: _networkAccessCode
@property (nonatomic) NSInteger phyMode; // ivar: _phyMode
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (nonatomic) NSUInteger venueCode; // ivar: _venueCode
@property (nonatomic) NSUInteger venueGroup; // ivar: _venueGroup


+(id)bssWithIdentifier:(id)arg0 apProfile:(id)arg1 apMode:(NSInteger)arg2 phyMode:(NSInteger)arg3 channel:(NSInteger)arg4 channelWidth:(NSInteger)arg5 rssi:(NSInteger)arg6 latitude:(CGFloat)arg7 longitude:(CGFloat)arg8 isEdgeBss:(BOOL)arg9 ;
+(id)bssWithIdentifier:(id)arg0 channel:(NSInteger)arg1 rssi:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)eventDictionary:(BOOL)arg0 ;


@end


#endif