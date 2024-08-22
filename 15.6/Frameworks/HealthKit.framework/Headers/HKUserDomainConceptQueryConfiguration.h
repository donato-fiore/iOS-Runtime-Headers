// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKUSERDOMAINCONCEPTQUERYCONFIGURATION_H
#define HKUSERDOMAINCONCEPTQUERYCONFIGURATION_H

@class NSArray;


#import "HKQueryServerConfiguration.h"
#import "HKQueryAnchor.h"

@interface HKUserDomainConceptQueryConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKQueryAnchor *anchor; // ivar: _anchor
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif