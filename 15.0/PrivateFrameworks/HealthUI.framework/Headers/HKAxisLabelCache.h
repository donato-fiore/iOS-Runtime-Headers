// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKAXISLABELCACHE_H
#define HKAXISLABELCACHE_H

@class NSNumber, NSCache;
@protocol HKAxisLabelDataSource;

#import <Foundation/Foundation.h>


@interface HKAxisLabelCache : NSObject

@property (weak, nonatomic) NSObject<HKAxisLabelDataSource> *axisLabelDataSource; // ivar: _axisLabelDataSource
@property (readonly, nonatomic) NSNumber *axisLabelMaximumWidth; // ivar: _axisLabelMaximumWidth
@property (retain, nonatomic) NSCache *mainCache; // ivar: _mainCache


-(BOOL)_largeDistanceFromModelRange:(id)arg0 toStartCache:(id)arg1 orEndCache:(id)arg2 timeScope:(NSInteger)arg3 ;
-(id)allAxisLabelsForRange:(id)arg0 isHorizontal:(BOOL)arg1 zoomScale:(CGFloat)arg2 timeScope:(NSInteger)arg3 ;
-(id)init;
-(void)_handleTimeChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)enumerateAxisLabelsForTextInRange:(id)arg0 rect:(struct CGRect )arg1 zoomScale:(CGFloat)arg2 contentOffset:(struct CGPoint )arg3 constantOffset:(CGFloat)arg4 isHorizontal:(BOOL)arg5 optionalOffset:(struct CGPoint )arg6 gridlineWidth:(CGFloat)arg7 timeScope:(NSInteger)arg8 usingBlock:(id)arg9 ;
-(void)invalidateCache;


@end


#endif