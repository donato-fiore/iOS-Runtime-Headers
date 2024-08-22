// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKCOLORPICKER_H
#define WKCOLORPICKER_H

@class NSString;
@protocol WKFormControl, UIColorPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>

#import "WKContentView.h"

@interface WKColorPicker : NSObject <WKFormControl, UIColorPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>

 {
    WKContentView *_view;
    RetainPtr<UIColorPickerViewController> _colorPickerViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)controlView;
-(id)focusedElementSuggestedColors;
-(id)initWithView:(id)arg0 ;
-(void)colorPickerViewControllerDidFinish:(id)arg0 ;
-(void)colorPickerViewControllerDidSelectColor:(id)arg0 ;
-(void)configurePresentation;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)selectColor:(id)arg0 ;
-(void)updateColorPickerState;


@end


#endif