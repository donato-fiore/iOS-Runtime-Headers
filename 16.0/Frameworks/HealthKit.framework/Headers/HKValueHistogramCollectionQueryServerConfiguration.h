// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKVALUEHISTOGRAMCOLLECTIONQUERYSERVERCONFIGURATION_H
#define HKVALUEHISTOGRAMCOLLECTIONQUERYSERVERCONFIGURATION_H

@class NSDate, NSDateComponents, NSArray;


#import "HKQueryServerConfiguration.h"

@interface HKValueHistogramCollectionQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDate *anchorDate; // ivar: _anchorDate
@property (copy, nonatomic) NSDateComponents *intervalComponents; // ivar: _intervalComponents
@property (copy, nonatomic) NSArray *quantityRanges; // ivar: _quantityRanges


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif