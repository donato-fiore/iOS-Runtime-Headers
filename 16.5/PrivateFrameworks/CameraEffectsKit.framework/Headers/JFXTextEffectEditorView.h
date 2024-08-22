// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXTEXTEFFECTEDITORVIEW_H
#define JFXTEXTEFFECTEDITORVIEW_H

@class UIView, NSString, NSUUID;
@protocol UIIndirectScribbleInteractionDelegate;


#import "JFXOverlayEffectDebugViewOptions.h"
#import "JFXTextEffectEditorTextView.h"
#import "JFXEffectTextEditingProperties.h"

@interface JFXTextEffectEditorView : UIView <UIIndirectScribbleInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) JFXOverlayEffectDebugViewOptions *debugOptions; // ivar: _debugOptions
@property (retain, nonatomic) UIView *debugView; // ivar: _debugView
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) JFXTextEffectEditorTextView *editField; // ivar: _editField
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *pencilTextEditingElementID; // ivar: _pencilTextEditingElementID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text;
@property (retain, nonatomic) JFXEffectTextEditingProperties *textEditingProperties; // ivar: _textEditingProperties
@property (retain, nonatomic) UIView *transformView; // ivar: _transformView


-(BOOL)indirectScribbleInteraction:(id)arg0 isElementFocused:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 textEditingProperties:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 textEditingProperties:(id)arg1 textContainer:(id)arg2 ;
-(struct CGRect )indirectScribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(void)applyTextEditingProperties:(id)arg0 ;
-(void)endEditing;
-(void)indirectScribbleInteraction:(id)arg0 focusElementIfNeeded:(id)arg1 referencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)indirectScribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)selectAll;


@end


#endif