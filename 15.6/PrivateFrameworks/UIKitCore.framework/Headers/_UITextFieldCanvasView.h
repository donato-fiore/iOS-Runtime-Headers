// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTFIELDCANVASVIEW_H
#define _UITEXTFIELDCANVASVIEW_H

@class UITextCanvasView;
@protocol _UITextFieldCanvasContext;



@interface _UITextFieldCanvasView : UITextCanvasView

@property (weak, nonatomic) NSObject<_UITextFieldCanvasContext> *context;


-(BOOL)_enableAutoConstraining;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)drawTextInRect:(struct CGRect )arg0 ;


@end


#endif