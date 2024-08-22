// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALICALENDARANONYMIZER_H
#define CALICALENDARANONYMIZER_H


#import <Foundation/Foundation.h>


@interface CaliCalendarAnonymizer : NSObject



+(id)anonymizedAddressURL:(id)arg0 ;
+(id)anonymizedDescription:(id)arg0 ;
+(id)anonymizedEmail:(id)arg0 ;
+(id)anonymizedEmailCommonName:(id)arg0 ;
+(id)anonymizedLocation:(id)arg0 ;
+(id)anonymizedPhoneNumber:(id)arg0 ;
+(id)anonymizedString:(id)arg0 ;
+(id)anonymizedString:(id)arg0 withAnonymizer:(id)arg1 ;
+(id)anonymizedSummary:(id)arg0 ;
+(id)anonymizedUID:(id)arg0 ;
+(id)anonymizedURNUID:(id)arg0 ;
+(id)anonymizedWebURL:(id)arg0 ;
+(id)sharedAnonymizedDomainName;
+(id)sharedAnonymizedStrings;
+(id)sharedAnonymizedStringsCount;
+(void)dump;


@end


#endif