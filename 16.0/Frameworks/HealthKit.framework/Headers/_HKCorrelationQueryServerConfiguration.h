// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKCORRELATIONQUERYSERVERCONFIGURATION_H
#define _HKCORRELATIONQUERYSERVERCONFIGURATION_H

@class NSDictionary;


#import "HKQueryServerConfiguration.h"

@interface _HKCorrelationQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDictionary *filterDictionary; // ivar: _filterDictionary


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif