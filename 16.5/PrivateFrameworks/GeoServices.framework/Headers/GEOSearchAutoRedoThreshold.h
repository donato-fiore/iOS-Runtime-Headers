// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSEARCHAUTOREDOTHRESHOLD_H
#define GEOSEARCHAUTOREDOTHRESHOLD_H


#import <Foundation/Foundation.h>


@interface GEOSearchAutoRedoThreshold : NSObject

@property (readonly, nonatomic) NSUInteger numberOfVisiblePoisThreshold; // ivar: _numberOfVisiblePoisThreshold
@property (readonly, nonatomic) CGFloat panDeltaThresholdInMeters; // ivar: _panDeltaThresholdInMeters
@property (readonly, nonatomic) CGFloat zoomInPercentThreshold; // ivar: _zoomInPercentThreshold
@property (readonly, nonatomic) CGFloat zoomOutPercentThreshold; // ivar: _zoomOutPercentThreshold


-(id)init;
-(id)initWithSearchAutoRedoThreshold:(id)arg0 ;


@end


#endif