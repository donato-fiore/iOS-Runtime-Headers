// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSNEWSANALYTICSCARRIERINFO_H
#define NSSNEWSANALYTICSCARRIERINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSSNewsAnalyticsCarrierInfo : NSObject

@property (readonly, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (readonly, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (readonly, nonatomic) NSString *mobileCountryCode; // ivar: _mobileCountryCode
@property (readonly, nonatomic) NSString *mobileNetworkCode; // ivar: _mobileNetworkCode


-(id)initWithCarrierName:(id)arg0 mobileCountryCode:(id)arg1 mobileNetworkCode:(id)arg2 isoCountryCode:(id)arg3 ;


@end


#endif