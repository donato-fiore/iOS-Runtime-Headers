// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKCUSTOMCACHEDISPLAYTYPETUPLE_H
#define _HKCUSTOMCACHEDISPLAYTYPETUPLE_H


#import <Foundation/Foundation.h>

#import "HKChartCache.h"
#import "HKDisplayType.h"

@interface _HKCustomCacheDisplayTypeTuple : NSObject

@property (readonly, nonatomic) HKChartCache *chartCache; // ivar: _chartCache
@property (readonly, nonatomic) HKDisplayType *displayType; // ivar: _displayType


-(id)initWithCustomCache:(id)arg0 displayType:(id)arg1 ;


@end


#endif