// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCURRENTLOCALECOUNTRYCODEPROVIDER_H
#define HKCURRENTLOCALECOUNTRYCODEPROVIDER_H

@protocol HKCurrentCountryCodeProvider;

#import <Foundation/Foundation.h>


@interface HKCurrentLocaleCountryCodeProvider : NSObject <HKCurrentCountryCodeProvider>





-(id)currentCountryCode;


@end


#endif