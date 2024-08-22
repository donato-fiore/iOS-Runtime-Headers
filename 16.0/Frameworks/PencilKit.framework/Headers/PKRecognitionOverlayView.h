// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKRECOGNITIONOVERLAYVIEW_H
#define PKRECOGNITIONOVERLAYVIEW_H

@class UIView, NSString, CHVisualizationManager;
@protocol CHVisualizationManagerDelegate;



@interface PKRecognitionOverlayView : UIView <CHVisualizationManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGAffineTransform drawingTransform; // ivar: _drawingTransform
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CHVisualizationManager *visualizationManager; // ivar: _visualizationManager


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 visualizationManager:(id)arg1 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)visualizationManager:(id)arg0 needsDisplayInRect:(struct CGRect )arg1 ;
-(void)visualizationManagerNeedsDisplay:(id)arg0 ;


@end


#endif