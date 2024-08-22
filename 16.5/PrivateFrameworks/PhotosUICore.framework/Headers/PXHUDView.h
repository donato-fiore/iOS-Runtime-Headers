// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXHUDVIEW_H
#define PXHUDVIEW_H

@class UIView, UIStackView, NSMapTable;



@interface PXHUDView : UIView

@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSMapTable *visualizationToView; // ivar: _visualizationToView


+(Class)visualizationClassToViewClass:(Class)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addVisualization:(id)arg0 ;
-(void)removeVisualization:(id)arg0 ;


@end


#endif