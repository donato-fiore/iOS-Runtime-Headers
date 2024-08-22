// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCURRENTACTIVITYCACHEQUERYSERVERCONFIGURATION_H
#define HKCURRENTACTIVITYCACHEQUERYSERVERCONFIGURATION_H

@class NSDateComponents;


#import "HKQueryServerConfiguration.h"

@interface HKCurrentActivityCacheQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDateComponents *statisticsIntervalComponents; // ivar: _statisticsIntervalComponents


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif