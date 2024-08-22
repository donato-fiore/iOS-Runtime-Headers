// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHBGRAPHICPROPERTIES_H
#define CHBGRAPHICPROPERTIES_H


#import <Foundation/Foundation.h>


@interface CHBGraphicProperties : NSObject



+(char)oaPresetDashTypeFromLinePatternEnum:(int)arg0 ;
+(float)widthFromLineWeightEnum:(int)arg0 ;
+(id)mapAssociatedEscherObjectstate:(id)arg0 ;
+(id)mapFillStyle:(struct XlChartFillStyle *)arg0 xlPictureFormat:(struct XlChartPicF *)arg1 state:(id)arg2 ;
+(id)mapFillStyleForMarker:(struct XlChartMarkerStyle *)arg0 complex:(BOOL)arg1 state:(id)arg2 ;
+(id)mapPresetDashFromPattern:(int)arg0 ;
+(id)oadGraphicPropertiesFromShapePropsStream:(char *)arg0 size:(unsigned int)arg1 ;
+(id)oadGraphicPropertiesFromState:(id)arg0 xlLineStyle:(struct XlChartLineStyle *)arg1 xlFillStyle:(struct XlChartFillStyle *)arg2 ;
+(id)oadGraphicPropertiesFromXlChartFrameType:(struct XlChartFrameType *)arg0 state:(id)arg1 ;
+(id)oadGraphicPropertiesFromXlChartSeriesFormat:(struct XlChartSeriesFormat *)arg0 state:(id)arg1 ;
+(id)oadGraphicPropertiesFromXlChartTextFrame:(*void)arg0 state:(id)arg1 ;
+(id)oadGraphicPropertiesFromXlLeaderLineStyleInPlot:(*void)arg0 state:(id)arg1 ;
+(id)oadGraphicPropertiesFromXlMarkerStyle:(struct XlChartMarkerStyle *)arg0 complex:(BOOL)arg1 state:(id)arg2 ;
+(id)oadStrokeFrom:(struct XlChartLineStyle *)arg0 ;
+(int)lineWeightEnumFromWidth:(float)arg0 ;
+(int)presetLinePatternEnumFromDash:(id)arg0 ;


@end


#endif