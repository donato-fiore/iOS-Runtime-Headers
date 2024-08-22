// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSDEVELOPERSETTINGS_H
#define VSDEVELOPERSETTINGS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSDeveloperSettings : NSObject <NSSecureCoding>



@property (nonatomic) BOOL cacheBusterEnabled; // ivar: _cacheBusterEnabled
@property (nonatomic) BOOL isInSetTopBoxMode; // ivar: _isInSetTopBoxMode
@property (nonatomic) BOOL requestTimeoutsDisabled; // ivar: _requestTimeoutsDisabled
@property (copy, nonatomic) NSString *setTopBoxBundleIdentifier; // ivar: _setTopBoxBundleIdentifier
@property (copy, nonatomic) NSString *setTopBoxIdentityProviderID; // ivar: _setTopBoxIdentityProviderID
@property (nonatomic) BOOL setTopBoxSupportsOptOut; // ivar: _setTopBoxSupportsOptOut
@property (nonatomic) BOOL setTopBoxUseDeviceProfile; // ivar: _setTopBoxUseDeviceProfile
@property (copy, nonatomic) NSString *setTopBoxUserToken; // ivar: _setTopBoxUserToken
@property (nonatomic) BOOL simulateExpiredToken; // ivar: _simulateExpiredToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDefaults;


@end


#endif