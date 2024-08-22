// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLFSETTINGS_H
#define CLFSETTINGS_H

@class NSArray, NSString;


#import "CLFBaseSettings.h"

@interface CLFSettings : CLFBaseSettings

@property (retain, nonatomic) NSArray *applicationBundleIdentifiers;
@property (nonatomic) BOOL didCompleteSetup;
@property (nonatomic) BOOL emergencyContactsEnabled;
@property (nonatomic) BOOL emergencyDialEnabled;
@property (nonatomic) BOOL emergencyKeypadEnabled;
@property (retain, nonatomic) NSString *listLayout;
@property (nonatomic) BOOL lockScreenClockEnabled;
@property (nonatomic) BOOL volumeButtonsEnabled;


+(id)allPreferenceSelectorsAsStrings;
+(id)domainName;
+(id)sharedInstance;
-(id)init;


@end


#endif