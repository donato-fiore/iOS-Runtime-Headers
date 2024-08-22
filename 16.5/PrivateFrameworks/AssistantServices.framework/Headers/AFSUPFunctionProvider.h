// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSUPFUNCTIONPROVIDER_H
#define AFSUPFUNCTIONPROVIDER_H

@class NSDateFormatter, NSString;
@protocol AFSpeakableNamespaceProvider;


#import "AFSpeakableUtteranceParser.h"

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider>

 {
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldAutomaticallyProvideFunctions;
-(id)_callFunction:(id)arg0 withArguments:(id)arg1 ;
-(id)_contextDeviceName:(id)arg0 ;
-(id)_contextRoomName:(id)arg0 ;
-(id)_currentLongDate:(id)arg0 ;
-(id)_currentShortDate:(id)arg0 ;
-(id)_currentTime:(id)arg0 ;
-(id)_currentWeekday:(id)arg0 ;
-(id)_dateFormattedWithFormatter:(id)arg0 arguments:(id)arg1 ;
-(id)_deviceModel;
-(id)_lowercaseString:(id)arg0 ;
-(id)_meCard;
-(id)_meCardIdentifier:(id)arg0 ;
-(id)_peerInfoForContextIdentifier:(id)arg0 ;
-(id)_siriUsageDescription:(id)arg0 ;
-(id)_speechRecognitionUsageDescription:(id)arg0 ;
-(id)_tempInWeatherUnits:(id)arg0 ;
-(id)_userFirstName:(id)arg0 ;
-(id)_userFullName:(id)arg0 ;
-(id)_userLastName:(id)arg0 ;
-(id)_userMiddleName:(id)arg0 ;
-(id)_userNickName:(id)arg0 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)stringForExpression:(id)arg0 ;
-(id)stringForExpression:(id)arg0 containsPrivacySensitiveContents:(*BOOL)arg1 ;


@end


#endif