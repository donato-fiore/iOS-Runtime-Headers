// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXHUDBOXEDVALUEVISUALIZATIONVIEW_H
#define PXHUDBOXEDVALUEVISUALIZATIONVIEW_H

@class UILabel;


#import "PXHUDAbstractVisualizationView.h"
#import "PXHUDBoxedValueVisualization.h"

@interface PXHUDBoxedValueVisualizationView : PXHUDAbstractVisualizationView {
    UILabel *_titleAndValueLabel;
}


@property (retain, nonatomic) PXHUDBoxedValueVisualization *visualization;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateTitleAndValueLabel;


@end


#endif