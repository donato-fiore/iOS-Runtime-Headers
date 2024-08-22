// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDRESOURCEPREFETCHPREDICATEOPTIONS_H
#define PLCLOUDRESOURCEPREFETCHPREDICATEOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PLPrefetchConfiguration.h"

@interface PLCloudResourcePrefetchPredicateOptions : NSObject <NSCopying>



@property (nonatomic) BOOL excludeDynamicResources; // ivar: _excludeDynamicResources
@property (retain, nonatomic) PLPrefetchConfiguration *prefetchConfiguration; // ivar: _prefetchConfiguration
@property (nonatomic) NSInteger prefetchMode; // ivar: _prefetchMode
@property (nonatomic) NSInteger prefetchOptimizeMode; // ivar: _prefetchOptimizeMode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPrefetchMode:(NSInteger)arg0 prefetchOptimizeMode:(NSInteger)arg1 excludeDynamicResources:(BOOL)arg2 prefetchConfiguration:(id)arg3 ;


@end


#endif