// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLINICALSAMPLEACCOUNTPROVIDER_H
#define HKCLINICALSAMPLEACCOUNTPROVIDER_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "HKClinicalSampleAccountProviderGateway.h"

@interface HKClinicalSampleAccountProvider : NSObject

@property (retain, nonatomic) HKClinicalSampleAccountProviderGateway *gateway; // ivar: _gateway
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger minCompatibleAPIVersion; // ivar: _minCompatibleAPIVersion
@property (copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (copy, nonatomic) NSString *title; // ivar: _title




@end


#endif