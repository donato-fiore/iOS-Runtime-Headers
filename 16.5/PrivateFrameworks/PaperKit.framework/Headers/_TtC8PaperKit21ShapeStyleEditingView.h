// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT21SHAPESTYLEEDITINGVIEW_H
#define _TTC8PAPERKIT21SHAPESTYLEEDITINGVIEW_H

@class UIView;
@protocol UIColorPickerViewControllerDelegate;



@interface _TtC8PaperKit21ShapeStyleEditingView : UIView <UIColorPickerViewControllerDelegate>

 {
    ? isCompactUI;
    ? showFill;
    ? showLineEnds;
    ? strokeColorControl;
    ? strokeWidthControl;
    ? fillColorControl;
    ? opacityControl;
    ? compactOpacityControl;
    ? compactOpacitySlider;
    ? lineEndControl;
    ? axis;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif