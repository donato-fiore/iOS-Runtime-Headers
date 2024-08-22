// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALCONFERENCEURLDETECTOR_H
#define CALCONFERENCEURLDETECTOR_H


#import <Foundation/Foundation.h>


@interface CalConferenceURLDetector : NSObject



+(BOOL)_hasDisallowedPathExtension:(id)arg0 ;
+(BOOL)_isGoogleMeetURL:(id)arg0 ;
+(BOOL)_isValidTelURL:(id)arg0 ;
+(BOOL)isPreferredURL:(id)arg0 ;
+(BOOL)isTUConversationLink:(id)arg0 ;
+(id)_dataDetector;
+(id)_googleMeetSuffix;
+(id)_linksInSource:(id)arg0 ;
+(id)_preferredHostSuffixes;
+(id)conferenceURLFromSources:(id)arg0 ;
+(id)googleMeetURLsAndPhoneNumbersFromSource:(id)arg0 ;
+(id)logHandle;


@end


#endif