// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSTROKEVISUALIZATION_H
#define CHSTROKEVISUALIZATION_H

@protocol CHStrokeProvider;


#import "CHVisualization.h"

@interface CHStrokeVisualization : CHVisualization

@property (retain, nonatomic) NSObject<CHStrokeProvider> *_strokeProviderDrawn; // ivar: __strokeProviderDrawn


-(void)drawStrokesFromStrokeProvider:(id)arg0 inRect:(struct CGRect )arg1 context:(struct CGContext *)arg2 ;
-(void)drawVisualizationInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 viewBounds:(struct CGRect )arg2 ;
-(void)recognitionSessionDidUpdateRecognitionResult;


@end


#endif