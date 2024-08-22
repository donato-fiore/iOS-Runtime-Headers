// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKCURRENTACTIVITYSUMMARYQUERYSERVERCONFIGURATION_H
#define _HKCURRENTACTIVITYSUMMARYQUERYSERVERCONFIGURATION_H

@class NSDictionary;


#import "HKQueryServerConfiguration.h"

@interface _HKCurrentActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDictionary *collectionIntervals; // ivar: _collectionIntervals


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif