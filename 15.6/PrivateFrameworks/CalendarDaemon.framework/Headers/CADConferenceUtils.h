// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADCONFERENCEUTILS_H
#define CADCONFERENCEUTILS_H


#import <Foundation/Foundation.h>


@interface CADConferenceUtils : NSObject



+(?)_conferenceURLsToRenewWithDatabaseURLString;
+(?)_performConferenceURLRenewalWithDatabase;
+(id)_extractURLStringsFromCalEvent:(*void)arg0 ;
+(void)performConferenceLinkRenewalIfNeeded;
+(void)removeNextConferenceLinkRenewalDate;
+(void)setNextConferenceLinkRenewalDate:(id)arg0 ;


@end


#endif