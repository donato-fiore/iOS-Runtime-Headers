// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKAXISLABELCACHE_H
#define HKAXISLABELCACHE_H

@class NSLock, NSArray, NSCache;
@protocol HKAxisLabelDataSource;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"

@interface HKAxisLabelCache : NSObject

@property (readonly, nonatomic) NSLock *axisLabelCacheLock; // ivar: _axisLabelCacheLock
@property (readonly, weak, nonatomic) NSObject<HKAxisLabelDataSource> *axisLabelDataSource; // ivar: _axisLabelDataSource
@property (retain, nonatomic) NSArray *lastRequestData; // ivar: _lastRequestData
@property (retain, nonatomic) HKValueRange *lastRequestRange; // ivar: _lastRequestRange
@property (retain, nonatomic) NSCache *mainCache; // ivar: _mainCache


-(BOOL)_axisLabel:(id)arg0 insideModelRange:(id)arg1 ;
-(id)_axisLabelsForPage:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)allAxisLabelsForRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)initWithLabelDataSource:(id)arg0 ;
-(void)_handleTimeChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)invalidateCache;


@end


#endif