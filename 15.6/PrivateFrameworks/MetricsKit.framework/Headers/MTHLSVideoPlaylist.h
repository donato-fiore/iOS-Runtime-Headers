// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTHLSVIDEOPLAYLIST_H
#define MTHLSVIDEOPLAYLIST_H

@class NSString, NSArray, NSMutableArray;
@protocol MTMediaPlaylist;

#import <Foundation/Foundation.h>


@interface MTHLSVideoPlaylist : NSObject <MTMediaPlaylist>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *eventData;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *mainFeatureMetricsData; // ivar: _mainFeatureMetricsData
@property (retain, nonatomic) NSMutableArray *rollItems; // ivar: _rollItems
@property (nonatomic) NSUInteger startPosition; // ivar: _startPosition
@property (readonly) Class superclass;


-(NSInteger)indexOfLastRollItemWithStartBeforePosition:(NSUInteger)arg0 ;
-(id)initWithMainFeatureMetricsData:(id)arg0 ;
-(id)initWithStartPosition:(NSUInteger)arg0 mainFeatureMetricsData:(id)arg1 ;
-(id)itemAtOverallPosition:(NSUInteger)arg0 rangeOptions:(NSInteger)arg1 ;
-(id)itemsBetweenStartOverallPosition:(NSUInteger)arg0 endOverallPosition:(NSUInteger)arg1 ;
-(id)mainFeatureItemWithStartOverallPosition:(NSUInteger)arg0 ;
-(void)addItemStartAtMilliseconds:(NSUInteger)arg0 durationMilliseconds:(NSUInteger)arg1 metricsData:(id)arg2 ;
-(void)addItemStartAtMilliseconds:(NSUInteger)arg0 endAtMilliseconds:(NSUInteger)arg1 metricsData:(id)arg2 ;
-(void)addItemStartAtSeconds:(CGFloat)arg0 durationSeconds:(CGFloat)arg1 metricsData:(id)arg2 ;
-(void)addRollInfoItem:(id)arg0 ;
-(void)addRollInfoItems:(id)arg0 ;
-(void)addRollItem:(id)arg0 ;
-(void)addRollItemWithStartOverallPosition:(NSUInteger)arg0 duration:(NSUInteger)arg1 metricsData:(id)arg2 ;


@end


#endif