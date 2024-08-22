// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKDATABASECHANGESQUERYSERVERCONFIGURATION_H
#define _HKDATABASECHANGESQUERYSERVERCONFIGURATION_H

@class NSSet;


#import "HKQueryServerConfiguration.h"
#import "HKQueryAnchor.h"

@interface _HKDatabaseChangesQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKQueryAnchor *anchor; // ivar: _anchor
@property (nonatomic) NSInteger anchorStrategyChangeCountLimit; // ivar: _anchorStrategyChangeCountLimit
@property (nonatomic) NSInteger changeDetailsQueryStrategy; // ivar: _changeDetailsQueryStrategy
@property (nonatomic) BOOL includeChangeDetails; // ivar: _includeChangeDetails
@property (copy, nonatomic) NSSet *sampleTypes; // ivar: _sampleTypes


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif