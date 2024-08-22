// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXHUDABSTRACTVISUALIZATIONVIEW_H
#define PXHUDABSTRACTVISUALIZATIONVIEW_H

@class UIView, NSString;
@protocol PXHUDVisualizationDelegate;


#import "PXHUDVisualization.h"

@interface PXHUDAbstractVisualizationView : UIView <PXHUDVisualizationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXHUDVisualization *visualization; // ivar: _visualization


-(void)visualizationDidChange:(id)arg0 ;


@end


#endif