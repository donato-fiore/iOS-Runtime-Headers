// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSUGGESTIONNOTIFICATIONPROFILE_H
#define PGSUGGESTIONNOTIFICATIONPROFILE_H

@class NSArray, NSSet, NSDate;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGSuggestionNotificationProfile : NSObject {
    NSArray *_existingSuggestions;
    BOOL _eligibleForNotification;
    unsigned char _userType;
    NSSet *_shareParticipantContactIdentifiers;
    NSDate *_dateOfLastNotification;
}


@property (readonly, nonatomic) NSDate *dateOfLastNotification;
@property (readonly, nonatomic) BOOL eligibleForNotification;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (readonly, nonatomic) unsigned char userType;


+(CGFloat)_requiredTimeIntervalFromLastNotificationForUserType:(unsigned char)arg0 ;
+(unsigned char)_requiredNotificationQualityForUserType:(unsigned char)arg0 ;
-(BOOL)shouldNotifyForSuggestion:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithExistingSuggestions:(id)arg0 ;
-(id)shareParticipantContactIdentifiers;
-(unsigned char)notificationQualityForEnrichableEvent:(id)arg0 ;
-(unsigned char)notificationQualityForHighlightNode:(id)arg0 ;
-(void)_determineUserTypeAndEligibility;


@end


#endif