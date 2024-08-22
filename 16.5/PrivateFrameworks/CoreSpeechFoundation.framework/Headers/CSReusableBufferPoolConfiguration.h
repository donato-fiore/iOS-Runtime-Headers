// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSREUSABLEBUFFERPOOLCONFIGURATION_H
#define CSREUSABLEBUFFERPOOLCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface CSReusableBufferPoolConfiguration : NSObject

@property (readonly, nonatomic) NSUInteger backingStoreCapacity; // ivar: _backingStoreCapacity
@property (readonly, nonatomic) CGFloat backingStoreIdleTimeout; // ivar: _backingStoreIdleTimeout
@property (readonly, nonatomic) NSUInteger maximumNumberOfBackingStores; // ivar: _maximumNumberOfBackingStores
@property (readonly, nonatomic) NSUInteger minimalNumberOfBackingStores; // ivar: _minimalNumberOfBackingStores


-(id)description;
-(id)initWithBackingStoreCapacity:(NSUInteger)arg0 minimalNumberOfBackingStores:(NSUInteger)arg1 maximumNumberOfBackingStores:(NSUInteger)arg2 backingStoreIdleTimeout:(CGFloat)arg3 ;


@end


#endif