// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHAUTOSTYLING_H
#define CHAUTOSTYLING_H


#import <Foundation/Foundation.h>

#import "CHDChart.h"
#import "OADDrawingTheme.h"

@interface CHAutoStyling : NSObject {
    CHDChart *mChart;
    OADDrawingTheme *mDrawingTheme;
}




+(id)autoStylingWithChart:(id)arg0 drawingTheme:(id)arg1 ;
-(id)drawingTheme;
-(id)initWithChart:(id)arg0 drawingTheme:(id)arg1 ;
-(int)defaultMarkerStyleForSeriesIndex:(NSUInteger)arg0 ;
-(void)replaceStrokeAndFillInEmptyMarker:(id)arg0 withSeriesGraphicProperties:(id)arg1 ;


@end


#endif