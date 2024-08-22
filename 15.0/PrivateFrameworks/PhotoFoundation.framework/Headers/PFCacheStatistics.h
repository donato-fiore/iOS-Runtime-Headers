// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCACHESTATISTICS_H
#define PFCACHESTATISTICS_H


#import <Foundation/Foundation.h>


@interface PFCacheStatistics : NSObject

@property (readonly) NSUInteger evictions; // ivar: _evictions
@property (readonly) NSUInteger hits; // ivar: _hits
@property (readonly) NSUInteger misses; // ivar: _misses


-(id)description;
-(void)accumulate:(id)arg0 ;
-(void)recordEvictions:(NSUInteger)arg0 ;
-(void)recordHit;
-(void)recordMiss;


@end


#endif