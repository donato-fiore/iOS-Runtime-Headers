// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPCONNECTIONSDONATIONSTORE_H
#define PPCONNECTIONSDONATIONSTORE_H


#import <Foundation/Foundation.h>


@interface PPConnectionsDonationStore : NSObject



+(id)defaultStore;
-(id)recentLocationDonationsSinceDate:(id)arg0 error:(*id)arg1 ;


@end


#endif