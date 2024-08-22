// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATACOLLECTORCONFIGURATION_H
#define HDDATACOLLECTORCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDDataCollectorConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat collectionInterval; // ivar: _collectionInterval
@property (readonly, nonatomic) CGFloat collectionLatency; // ivar: _collectionLatency
@property (readonly, nonatomic) NSUInteger collectionType; // ivar: _collectionType


+(id)configurationWithType:(NSUInteger)arg0 aggregatorConfiguration:(id)arg1 ;
+(id)configurationWithType:(NSUInteger)arg0 interval:(CGFloat)arg1 latency:(CGFloat)arg2 ;
+(id)disabledConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mergedConfiguration:(id)arg0 ;


@end


#endif