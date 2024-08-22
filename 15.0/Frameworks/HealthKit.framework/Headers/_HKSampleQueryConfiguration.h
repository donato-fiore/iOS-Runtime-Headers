// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKSAMPLEQUERYCONFIGURATION_H
#define _HKSAMPLEQUERYCONFIGURATION_H

@class NSArray;


#import "HKQueryServerConfiguration.h"

@interface _HKSampleQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL includeAutomaticTimeZones; // ivar: _includeAutomaticTimeZones
@property (nonatomic) BOOL includeContributorInformation; // ivar: _includeContributorInformation
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (copy, nonatomic) NSArray *queryDescriptors; // ivar: _queryDescriptors
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif