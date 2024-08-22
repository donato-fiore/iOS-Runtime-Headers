// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPAYLOAD_H
#define MKPAYLOAD_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MKFeaturePayload.h"

@interface MKPayload : NSObject

@property (retain, nonatomic) MKFeaturePayload *accessibilitySettings; // ivar: _accessibilitySettings
@property (retain, nonatomic) MKFeaturePayload *accounts; // ivar: _accounts
@property (copy, nonatomic) NSString *androidAPILevel; // ivar: _androidAPILevel
@property (copy, nonatomic) NSString *androidBrand; // ivar: _androidBrand
@property (copy, nonatomic) NSString *androidLocale; // ivar: _androidLocale
@property (copy, nonatomic) NSString *androidModel; // ivar: _androidModel
@property (copy, nonatomic) NSString *androidOSVersion; // ivar: _androidOSVersion
@property (copy, nonatomic) NSString *androidVersion; // ivar: _androidVersion
@property (copy, nonatomic) NSString *androidVersionCode; // ivar: _androidVersionCode
@property (retain, nonatomic) MKFeaturePayload *bookmarks; // ivar: _bookmarks
@property (retain, nonatomic) MKFeaturePayload *calendars; // ivar: _calendars
@property (retain, nonatomic) MKFeaturePayload *contacts; // ivar: _contacts
@property (nonatomic) NSUInteger data; // ivar: _data
@property (nonatomic) NSUInteger dataSize; // ivar: _dataSize
@property (retain, nonatomic) MKFeaturePayload *displaySettings; // ivar: _displaySettings
@property (nonatomic) NSUInteger elapsedTime; // ivar: _elapsedTime
@property (retain, nonatomic) MKFeaturePayload *files; // ivar: _files
@property (retain, nonatomic) MKFeaturePayload *messages; // ivar: _messages
@property (retain, nonatomic) MKFeaturePayload *photos; // ivar: _photos
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (retain, nonatomic) MKFeaturePayload *videos; // ivar: _videos
@property (retain, nonatomic) MKFeaturePayload *whatsapp; // ivar: _whatsapp


-(id)dictionary;
-(id)init;


@end


#endif