// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPAFPLAYLIST_H
#define MTPAFPLAYLIST_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface MTPAFPlaylist : NSObject

@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (copy) NSArray *metricsData; // ivar: _metricsData


-(id)currentItems;
-(id)initWithSharedMetricsData:(id)arg0 ;
-(void)addItemStartAtMilliseconds:(NSUInteger)arg0 durationMilliseconds:(NSUInteger)arg1 metricsData:(id)arg2 ;
-(void)addItemStartAtMilliseconds:(NSUInteger)arg0 endAtMilliseconds:(NSUInteger)arg1 metricsData:(id)arg2 ;
-(void)addItemStartAtSeconds:(CGFloat)arg0 durationSeconds:(CGFloat)arg1 metricsData:(id)arg2 ;
-(void)updateEventData:(id)arg0 ;


@end


#endif