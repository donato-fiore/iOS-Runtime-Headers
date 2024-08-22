// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNPUSHNOTIFICATIONREQUESTBUILDER_H
#define UNPUSHNOTIFICATIONREQUESTBUILDER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface UNPushNotificationRequestBuilder : NSObject {
    NSDictionary *_payload;
    NSString *_bundleIdentifier;
    NSString *_identifier;
}




-(NSUInteger)_interruptionLevelForString:(id)arg0 ;
-(id)_sanitizeAPSDictionary:(id)arg0 ;
-(id)_sanitizeAlert:(id)arg0 ;
-(id)_sanitizeFlag:(id)arg0 ;
-(id)_sanitizeInterruptionLevelString:(id)arg0 ;
-(id)_sanitizeLocalizationArgumentsArray:(id)arg0 ;
-(id)_sanitizeRelevanceScore:(id)arg0 ;
-(id)_sanitizeSound:(id)arg0 ;
-(id)_sanitizeStringArray:(id)arg0 ;
-(id)_sanitizeTopicIdentifier:(id)arg0 ;
-(id)_sanitizeUnsignedInteger:(id)arg0 ;
-(id)_sanitizeVolume:(id)arg0 ;
-(id)buildNotificationRequest;
-(id)buildSafePayload;
-(id)initWithIdentifier:(id)arg0 payload:(id)arg1 bundleIdentifier:(id)arg2 ;


@end


#endif