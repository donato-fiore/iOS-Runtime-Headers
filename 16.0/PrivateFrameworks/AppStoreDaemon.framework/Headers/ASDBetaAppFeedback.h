// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDBETAAPPFEEDBACK_H
#define ASDBETAAPPFEEDBACK_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASDBetaAppVersion.h"

@interface ASDBetaAppFeedback : NSObject <NSSecureCoding>



@property NSUInteger appUptime; // ivar: _appUptime
@property (copy) ASDBetaAppVersion *appVersion; // ivar: _appVersion
@property (copy) NSString *architecture; // ivar: _architecture
@property unsigned int batteryPercentage; // ivar: _batteryPercentage
@property (copy) NSString *bundleID; // ivar: _bundleID
@property (copy) NSString *carrier; // ivar: _carrier
@property (copy) NSString *cellularNetworkType; // ivar: _cellularNetworkType
@property (copy) NSString *comments; // ivar: _comments
@property (copy) NSString *deviceType; // ivar: _deviceType
@property NSUInteger diskAvailable; // ivar: _diskAvailable
@property NSUInteger diskTotal; // ivar: _diskTotal
@property (copy) NSString *email; // ivar: _email
@property (copy) NSArray *imagesData; // ivar: _imagesData
@property (copy) NSString *incidentID; // ivar: _incidentID
@property (copy) NSString *locale; // ivar: _locale
@property (copy) NSString *networkConnectionType; // ivar: _networkConnectionType
@property (copy) NSString *osVersion; // ivar: _osVersion
@property (copy) NSString *pairedWatchModel; // ivar: _pairedWatchModel
@property (copy) NSString *pairedWatchOSVersion; // ivar: _pairedWatchOSVersion
@property unsigned int screenHeight; // ivar: _screenHeight
@property unsigned int screenWidth; // ivar: _screenWidth
@property (copy) NSString *timeZone; // ivar: _timeZone
@property NSUInteger timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif