// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCALLCAPABILITIES_H
#define CTCALLCAPABILITIES_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCallCapabilities : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL isCSCallingAvailable; // ivar: _isCSCallingAvailable
@property (nonatomic) BOOL isCarrierSupportsEmergencyCallOnWifiNoLimit; // ivar: _isCarrierSupportsEmergencyCallOnWifiNoLimit
@property (nonatomic) BOOL isEmergencyCallingOnWifiAllowed; // ivar: _isEmergencyCallingOnWifiAllowed
@property (nonatomic) BOOL isEmergencyCallingOnWifiAvailable; // ivar: _isEmergencyCallingOnWifiAvailable
@property (nonatomic) BOOL isVoLTECallingAvailable; // ivar: _isVoLTECallingAvailable
@property (nonatomic) BOOL isWifiCallingAvailable; // ivar: _isWifiCallingAvailable


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif