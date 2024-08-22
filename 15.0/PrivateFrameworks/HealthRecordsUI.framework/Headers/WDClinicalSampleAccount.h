// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCLINICALSAMPLEACCOUNT_H
#define WDCLINICALSAMPLEACCOUNT_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "WDClinicalSampleAccountProvider.h"

@interface WDClinicalSampleAccount : NSObject

@property (copy, nonatomic) NSArray *batches; // ivar: _batches
@property (copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (retain, nonatomic) WDClinicalSampleAccountProvider *provider; // ivar: _provider




@end


#endif