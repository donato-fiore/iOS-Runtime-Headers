// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDICTATIONCONNECTIONPREFERENCES_H
#define UIDICTATIONCONNECTIONPREFERENCES_H

@class AFPreferences;

#import <Foundation/Foundation.h>


@interface UIDictationConnectionPreferences : NSObject

@property (retain, nonatomic) AFPreferences *afPreferences; // ivar: _afPreferences


+(id)sharedInstance;
-(BOOL)dictationIsEnabled;
-(BOOL)ignoreServerManualEndpointingThreshold;
-(BOOL)isSmartLanguageSelectionEnabled;
-(BOOL)suppressDataSharingOptIn;
-(BOOL)suppressDictationOptIn;
-(NSInteger)dataSharingOptInStatus;
-(id)dictationSLSEnabledLanguages;
-(id)initSingleton;
-(id)languageCode;
-(id)manualEndpointingThreshold;
-(void)afPreferencesChanged:(id)arg0 ;


@end


#endif