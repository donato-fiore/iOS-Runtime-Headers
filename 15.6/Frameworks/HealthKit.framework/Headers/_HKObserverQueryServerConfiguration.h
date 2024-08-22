// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKOBSERVERQUERYSERVERCONFIGURATION_H
#define _HKOBSERVERQUERYSERVERCONFIGURATION_H

@class NSArray;


#import "HKQueryServerConfiguration.h"

@interface _HKObserverQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL observeUnfrozenSeries; // ivar: _observeUnfrozenSeries
@property (copy, nonatomic) NSArray *queryDescriptors; // ivar: _queryDescriptors


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif