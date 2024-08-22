// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNCACHEFIXEDCAPACITYBOUNDINGSTRATEGY_H
#define _CNCACHEFIXEDCAPACITYBOUNDINGSTRATEGY_H

@class NSString;
@protocol CNCacheBoundingStrategy;

#import <Foundation/Foundation.h>

#import "CNQueue.h"

@interface _CNCacheFixedCapacityBoundingStrategy : NSObject <CNCacheBoundingStrategy>



@property (readonly, nonatomic) NSUInteger capacity; // ivar: _capacity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CNQueue *keys; // ivar: _keys
@property (readonly) Class superclass;


-(BOOL)shouldEvictKey:(id)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)willAccessKey:(id)arg0 ;
-(void)willUpdateCacheBy:(NSUInteger)arg0 forKey:(id)arg1 keysToEvict:(*id)arg2 ;


@end


#endif