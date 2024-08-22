// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNDINMEMORYDONATIONPREFERENCES_H
#define CNDINMEMORYDONATIONPREFERENCES_H

@class NSString;
@protocol CNDDonationPreferences;

#import <Foundation/Foundation.h>


@interface CNDInMemoryDonationPreferences : NSObject <CNDDonationPreferences>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDonationsEnabled) BOOL donationsEnabled; // ivar: _donationsEnabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)observableWithPreferences:(id)arg0 notificationCenter:(id)arg1 schedulerProvider:(id)arg2 ;


@end


#endif