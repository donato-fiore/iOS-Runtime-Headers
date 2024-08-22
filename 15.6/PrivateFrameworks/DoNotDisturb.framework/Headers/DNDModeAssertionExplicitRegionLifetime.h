// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDMODEASSERTIONEXPLICITREGIONLIFETIME_H
#define DNDMODEASSERTIONEXPLICITREGIONLIFETIME_H

@class CLCircularRegion;


#import "DNDModeAssertionLifetime.h"

@interface DNDModeAssertionExplicitRegionLifetime : DNDModeAssertionLifetime

@property (readonly, copy, nonatomic) CLCircularRegion *region; // ivar: _region


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)lifetimeType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif