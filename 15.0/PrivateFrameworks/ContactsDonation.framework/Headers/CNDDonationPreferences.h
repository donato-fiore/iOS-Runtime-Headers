// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNDDONATIONPREFERENCES_H
#define CNDDONATIONPREFERENCES_H

@class NSString, NSNotificationCenter;
@protocol CNDDonationPreferences, CNDonationPreferencesLogger;

#import <Foundation/Foundation.h>


@interface CNDDonationPreferences : NSObject <CNDDonationPreferences>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *donationPreferenceCheckingBlock; // ivar: _donationPreferenceCheckingBlock
@property (readonly, copy, nonatomic) id *donationPreferenceSettingBlock; // ivar: _donationPreferenceSettingBlock
@property (nonatomic, getter=isDonationsEnabled) BOOL donationsEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNDonationPreferencesLogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;


+(id)observableWithPreferences:(id)arg0 notificationCenter:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)init;
// -(id)initWithNotificationCenter:(id)arg0 logger:(id)arg1 donationPreferenceCheckingBlock:(id)arg2 donationPreferenceSettingBlock:(unk)arg3  ;


@end


#endif