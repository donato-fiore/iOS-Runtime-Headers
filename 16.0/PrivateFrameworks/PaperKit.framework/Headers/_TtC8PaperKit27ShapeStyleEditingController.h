// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT27SHAPESTYLEEDITINGCONTROLLER_H
#define _TTC8PAPERKIT27SHAPESTYLEEDITINGCONTROLLER_H

@protocol _UIColorPickerViewControllerDelegate, UIGestureRecognizerDelegate, _TtP8PaperKit34ValueEditingViewControllerDelegate_;

#import <Foundation/Foundation.h>


@interface _TtC8PaperKit27ShapeStyleEditingController : NSObject <_UIColorPickerViewControllerDelegate, UIGestureRecognizerDelegate, _TtP8PaperKit34ValueEditingViewControllerDelegate_>

 {
    ? controller;
    ? viewControllerProvider;
    ? shapeStyleEditingView;
    ? isCompactUI;
    ? defaultStrokeColor;
    ? defaultFillColor;
    ? editingAttribute;
}




-(id)init;
-(void)_colorPickerViewControllerDidDeselectColor:(id)arg0 ;
-(void)colorPickerViewController:(id)arg0 didSelectColor:(id)arg1 continuously:(BOOL)arg2 ;
-(void)didChangeOpacitySlider;
-(void)didFinishChangingOpacitySlider;
-(void)didStartChangingOpacitySlider;
-(void)didTapCompactOpacityButtonForEvent:(id)arg0 ;
-(void)didTapFillColorButtonForEvent:(id)arg0 ;
-(void)didTapStrokeColorButtonForEvent:(id)arg0 ;
-(void)didTapStrokeWidthButtonForEvent:(id)arg0 ;
-(void)lineTypeControlValueChanged;
-(void)valueEditingViewController:(id)arg0 didChangeValue:(NSInteger)arg1 ;
-(void)valueEditingViewController:(id)arg0 didFinishChangingValue:(NSInteger)arg1 ;
-(void)valueEditingViewController:(id)arg0 didStartChangingValue:(NSInteger)arg1 ;


@end


#endif