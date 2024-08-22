// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16MAGNIFIERSUPPORT17MFLIVEPREVIEWVIEW_H
#define _TTC16MAGNIFIERSUPPORT17MFLIVEPREVIEWVIEW_H

@class UIView, NSString;



@interface _TtC16MagnifierSupport17MFLivePreviewView : UIView

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) BOOL isAccessibilityElement;


+(Class)layerClass;
-(BOOL)_accessibilityUseAccessibilityFrameForHittest;
-(BOOL)accessibilityPerformEscape;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(unsigned int)_accessibilityMediaAnalysisOptions;


@end


#endif