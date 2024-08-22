// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16MAGNIFIERSUPPORT17MFLIVEPREVIEWVIEW_H
#define _TTC16MAGNIFIERSUPPORT17MFLIVEPREVIEWVIEW_H

@class UIView, NSString;



@interface _TtC16MagnifierSupport17MFLivePreviewView : UIView {
    ? $__lazy_storage_$_pointsOverlayLayer;
    ? $__lazy_storage_$_pointsPath;
    ? textValue;
}


@property (nonatomic, copy) NSString *accessibilityLabel;


+(Class)layerClass;
-(BOOL)_accessibilityUseAccessibilityFrameForHittest;
-(BOOL)accessibilityPerformEscape;
-(id)accessibilityExpandedTextValue;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(unsigned int)_accessibilityMediaAnalysisOptions;
-(void)layoutSublayersOfLayer:(id)arg0 ;


@end


#endif