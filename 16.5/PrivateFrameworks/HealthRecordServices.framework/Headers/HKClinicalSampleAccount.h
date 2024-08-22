// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALSAMPLEACCOUNT_H
#define HKCLINICALSAMPLEACCOUNT_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "HKClinicalSampleAccountProvider.h"

@interface HKClinicalSampleAccount : NSObject

@property (copy, nonatomic) NSArray *batches; // ivar: _batches
@property (copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (retain, nonatomic) HKClinicalSampleAccountProvider *provider; // ivar: _provider


-(id)asClinicalGatewayWithBrand:(id)arg0 ;
-(id)asClinicalProviderWithBrand:(id)arg0 ;


@end


#endif