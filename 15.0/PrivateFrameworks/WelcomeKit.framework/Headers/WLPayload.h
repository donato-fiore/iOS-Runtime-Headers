// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLPAYLOAD_H
#define WLPAYLOAD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WLFeaturePayload.h"

@interface WLPayload : NSObject

@property (retain, nonatomic) WLFeaturePayload *accessibilitySettings; // ivar: _accessibilitySettings
@property (retain, nonatomic) WLFeaturePayload *accounts; // ivar: _accounts
@property (copy, nonatomic) NSString *androidAPILevel; // ivar: _androidAPILevel
@property (copy, nonatomic) NSString *androidBrand; // ivar: _androidBrand
@property (copy, nonatomic) NSString *androidLocale; // ivar: _androidLocale
@property (copy, nonatomic) NSString *androidModel; // ivar: _androidModel
@property (copy, nonatomic) NSString *androidOSVersion; // ivar: _androidOSVersion
@property (copy, nonatomic) NSString *androidVersion; // ivar: _androidVersion
@property (copy, nonatomic) NSString *androidVersionCode; // ivar: _androidVersionCode
@property (retain, nonatomic) WLFeaturePayload *bookmarks; // ivar: _bookmarks
@property (retain, nonatomic) WLFeaturePayload *calendars; // ivar: _calendars
@property (retain, nonatomic) WLFeaturePayload *contacts; // ivar: _contacts
@property (nonatomic) NSUInteger data; // ivar: _data
@property (nonatomic) NSUInteger dataSize; // ivar: _dataSize
@property (retain, nonatomic) WLFeaturePayload *displaySettings; // ivar: _displaySettings
@property (nonatomic) NSUInteger elapsedTime; // ivar: _elapsedTime
@property (retain, nonatomic) WLFeaturePayload *files; // ivar: _files
@property (retain, nonatomic) WLFeaturePayload *messages; // ivar: _messages
@property (retain, nonatomic) WLFeaturePayload *photos; // ivar: _photos
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (retain, nonatomic) WLFeaturePayload *videos; // ivar: _videos


-(id)dictionary;
-(id)init;


@end


#endif