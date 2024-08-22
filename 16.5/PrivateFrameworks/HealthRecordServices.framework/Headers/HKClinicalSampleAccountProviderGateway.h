// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALSAMPLEACCOUNTPROVIDERGATEWAY_H
#define HKCLINICALSAMPLEACCOUNTPROVIDERGATEWAY_H

@class HKFHIRVersion, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface HKClinicalSampleAccountProviderGateway : NSObject

@property (copy, nonatomic) HKFHIRVersion *FHIRVersion; // ivar: _FHIRVersion
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (copy, nonatomic) NSString *title; // ivar: _title




@end


#endif