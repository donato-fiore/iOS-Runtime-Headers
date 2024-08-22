// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHBMARKER_H
#define CHBMARKER_H


#import <Foundation/Foundation.h>


@interface CHBMarker : NSObject



+(id)readFrom:(struct XlChartSeriesFormat *)arg0 state:(id)arg1 ;
+(int)chdMarkerStyleFromXlMarkerType:(int)arg0 ;
+(int)xlMarkerStyleFromCHDMarkerType:(int)arg0 ;


@end


#endif