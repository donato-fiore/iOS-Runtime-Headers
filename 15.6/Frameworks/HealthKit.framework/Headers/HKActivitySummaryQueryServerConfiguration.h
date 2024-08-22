// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKACTIVITYSUMMARYQUERYSERVERCONFIGURATION_H
#define HKACTIVITYSUMMARYQUERYSERVERCONFIGURATION_H



#import "HKQueryServerConfiguration.h"

@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (nonatomic) BOOL orderByDateAscending; // ivar: _orderByDateAscending
@property (nonatomic) BOOL shouldIncludeActivitySummaryPrivateProperties; // ivar: _shouldIncludeActivitySummaryPrivateProperties
@property (nonatomic) BOOL shouldIncludeActivitySummaryStatistics; // ivar: _shouldIncludeActivitySummaryStatistics


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif