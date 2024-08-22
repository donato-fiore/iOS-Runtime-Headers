// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ANEPERFORMANCESTATSIOSURFACE_H
#define _ANEPERFORMANCESTATSIOSURFACE_H


#import <Foundation/Foundation.h>

#import "_ANEIOSurfaceObject.h"

@interface _ANEPerformanceStatsIOSurface : NSObject

@property (readonly, nonatomic) NSInteger statType; // ivar: _statType
@property (readonly, nonatomic) _ANEIOSurfaceObject *stats; // ivar: _stats


+(id)new;
+(id)objectWithIOSurface:(id)arg0 statType:(NSInteger)arg1 ;
-(id)description;
-(id)init;
-(id)initWithIOSurface:(id)arg0 statType:(NSInteger)arg1 ;


@end


#endif