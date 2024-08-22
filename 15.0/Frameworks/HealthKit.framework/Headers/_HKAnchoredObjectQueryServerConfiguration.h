// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKANCHOREDOBJECTQUERYSERVERCONFIGURATION_H
#define _HKANCHOREDOBJECTQUERYSERVERCONFIGURATION_H

@class NSArray;


#import "HKQueryServerConfiguration.h"
#import "HKQueryAnchor.h"

@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKQueryAnchor *anchor; // ivar: _anchor
@property (nonatomic) CGFloat collectionInterval; // ivar: _collectionInterval
@property (nonatomic) BOOL includeAutomaticTimeZones; // ivar: _includeAutomaticTimeZones
@property (nonatomic) BOOL includeContributorInformation; // ivar: _includeContributorInformation
@property (nonatomic) BOOL includeDeletedObjects; // ivar: _includeDeletedObjects
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (copy, nonatomic) NSArray *queryDescriptors; // ivar: _queryDescriptors


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif