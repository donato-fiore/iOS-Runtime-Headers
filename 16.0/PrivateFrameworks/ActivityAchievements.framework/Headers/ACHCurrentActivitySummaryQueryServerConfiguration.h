// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHCURRENTACTIVITYSUMMARYQUERYSERVERCONFIGURATION_H
#define ACHCURRENTACTIVITYSUMMARYQUERYSERVERCONFIGURATION_H

@class HKQueryServerConfiguration, NSDictionary;



@interface ACHCurrentActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDictionary *collectionIntervals; // ivar: _collectionIntervals


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif