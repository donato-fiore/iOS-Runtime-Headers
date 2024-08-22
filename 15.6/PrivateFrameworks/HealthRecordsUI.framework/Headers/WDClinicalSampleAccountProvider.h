// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCLINICALSAMPLEACCOUNTPROVIDER_H
#define WDCLINICALSAMPLEACCOUNTPROVIDER_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "WDClinicalSampleAccountProviderGateway.h"

@interface WDClinicalSampleAccountProvider : NSObject

@property (retain, nonatomic) WDClinicalSampleAccountProviderGateway *gateway; // ivar: _gateway
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger minCompatibleAPIVersion; // ivar: _minCompatibleAPIVersion
@property (copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (copy, nonatomic) NSString *title; // ivar: _title




@end


#endif