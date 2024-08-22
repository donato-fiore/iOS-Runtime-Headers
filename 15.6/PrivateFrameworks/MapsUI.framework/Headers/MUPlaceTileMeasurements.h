// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPLACETILEMEASUREMENTS_H
#define MUPLACETILEMEASUREMENTS_H


#import <Foundation/Foundation.h>


@interface MUPlaceTileMeasurements : NSObject

@property (nonatomic) CGFloat deviceScale; // ivar: _deviceScale
@property (nonatomic) CGFloat maxFooterHeight; // ivar: _maxFooterHeight
@property (nonatomic) CGFloat maxSubtitleHeight; // ivar: _maxSubtitleHeight
@property (nonatomic) CGFloat maxTitleHeight; // ivar: _maxTitleHeight
@property (nonatomic) CGFloat tileWidth; // ivar: _tileWidth


+(id)defaultMeasurements;


@end


#endif