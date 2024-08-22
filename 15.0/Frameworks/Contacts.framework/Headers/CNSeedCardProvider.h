// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSEEDCARDPROVIDER_H
#define CNSEEDCARDPROVIDER_H


#import <Foundation/Foundation.h>


@interface CNSeedCardProvider : NSObject



+(id)bundleWithSeedCards;
+(id)dataForCountryCode:(id)arg0 ;
+(id)dataForEveryCountry;
+(id)nearestAvailableDataForCountryCode:(id)arg0 ;


@end


#endif