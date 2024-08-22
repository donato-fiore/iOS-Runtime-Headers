// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVTIMELINEMARKER_H
#define PVTIMELINEMARKER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PVTimelineMarker : NSObject

@property (nonatomic) int color; // ivar: _color
@property (copy, nonatomic) NSString *comment; // ivar: _comment
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property (nonatomic) int type; // ivar: _type


+(id)markerWithOZXTimeMarker:(struct _OZXTimeMarker *)arg0 ;
+(id)markerWithOZXTimeMarkerFigTime:(struct _OZXTimeMarkerFigTime *)arg0 ;
+(id)markerWithType:(int)arg0 timeRange:(struct ? )arg1 ;
-(id)initWithType:(int)arg0 timeRange:(struct ? )arg1 ;


@end


#endif