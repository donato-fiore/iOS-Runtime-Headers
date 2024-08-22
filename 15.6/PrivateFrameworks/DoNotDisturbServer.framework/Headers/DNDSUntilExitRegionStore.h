// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSUNTILEXITREGIONSTORE_H
#define DNDSUNTILEXITREGIONSTORE_H

@class NSArray, CLRegion, NSNumber;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface DNDSUntilExitRegionStore : NSObject <NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs; // ivar: _activeLifetimeAssertionUUIDs
@property (readonly, copy, nonatomic) CLRegion *currentRegion; // ivar: _currentRegion
@property (readonly, copy, nonatomic) NSNumber *hasActiveLifetimes; // ivar: _hasActiveLifetimes
@property (readonly, copy, nonatomic) NSNumber *regionEntered; // ivar: _regionEntered


+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithActiveLifetimeAssertionUUIDs:(id)arg0 currentRegion:(id)arg1 regionEntered:(id)arg2 ;
-(id)_initWithStore:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif