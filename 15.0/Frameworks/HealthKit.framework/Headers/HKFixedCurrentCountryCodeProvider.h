// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFIXEDCURRENTCOUNTRYCODEPROVIDER_H
#define HKFIXEDCURRENTCOUNTRYCODEPROVIDER_H

@class NSString;
@protocol HKCurrentCountryCodeProvider;

#import <Foundation/Foundation.h>


@interface HKFixedCurrentCountryCodeProvider : NSObject <HKCurrentCountryCodeProvider>

 {
    NSString *_countryCode;
}




-(id)currentCountryCode;
-(id)initWithCountryCode:(id)arg0 ;


@end


#endif