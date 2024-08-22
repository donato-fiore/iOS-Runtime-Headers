// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GRAPHRENDEROPERATION_H
#define GRAPHRENDEROPERATION_H

@class NSArray;
@protocol GraphRenderOperationDelegate;

#import <Foundation/Foundation.h>

#import "StockChartDisplayMode.h"
#import "StockGraphImageSet.h"

@interface GraphRenderOperation : NSObject

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (weak, nonatomic) NSObject<GraphRenderOperationDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) StockChartDisplayMode *displayMode; // ivar: _displayMode
@property (retain, nonatomic) NSArray *dottedLinePositions; // ivar: _dottedLinePositions
@property (retain, nonatomic) NSArray *dottedLinePositionsForStyleOnly; // ivar: _dottedLinePositionsForStyleOnly
@property (retain, nonatomic) StockGraphImageSet *graphImageSet; // ivar: _graphImageSet
@property (nonatomic) UIEdgeInsets graphInsets; // ivar: _graphInsets
@property (nonatomic) CGSize graphSize; // ivar: _graphSize
@property (retain, nonatomic) NSArray *linePointCounts; // ivar: _linePointCounts
@property (nonatomic) NSUInteger maxVolume; // ivar: _maxVolume
@property (nonatomic) *CGPoint points; // ivar: _points
@property (nonatomic) BOOL roundLineCaps; // ivar: _roundLineCaps
@property (nonatomic) CGFloat volumeBarWidth; // ivar: _volumeBarWidth
@property (nonatomic) *? volumeBars; // ivar: _volumeBars
@property (nonatomic) unsigned int volumeCount; // ivar: _volumeCount
@property (nonatomic) CGSize volumeGraphSize; // ivar: _volumeGraphSize


-(struct CGSize )lineGraphSize;
-(void)cancel;
-(void)render;
-(void)renderGraphLineInContext:(struct CGContext *)arg0 withColor:(id)arg1 offset:(struct CGPoint )arg2 ;
-(void)renderLineGraph;
-(void)renderVolumeGraph;


@end


#endif