// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT23CANVASELEMENTCONTROLLER_H
#define _TTC8PAPERKIT23CANVASELEMENTCONTROLLER_H

@protocol PKToolPickerObserverPrivate, PKToolPickerPrivateDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8PaperKit23CanvasElementController : NSObject <PKToolPickerObserverPrivate, PKToolPickerPrivateDelegate>

 {
    ? delegate;
    ? shapeStyleController;
    ? textStyleController;
    ? signatureStyleController;
    ? toolPickerController;
    ? isApplyingStyle;
    ? editingContainerView;
}




-(BOOL)_toolPicker:(id)arg0 shouldChangeSelectedToolColor:(id)arg1 ;
-(id)_toolPickerCurrentSelectionColor:(id)arg0 ;
-(id)init;
-(void)_toolPicker:(id)arg0 didChangeColor:(id)arg1 ;
-(void)_toolPickerDidChangePosition:(id)arg0 fromPosition:(NSInteger)arg1 toPosition:(NSInteger)arg2 ;
-(void)_toolPickerDidChangeScaleFactor:(id)arg0 ;
-(void)toolPickerFramesObscuredDidChange:(id)arg0 ;


@end


#endif