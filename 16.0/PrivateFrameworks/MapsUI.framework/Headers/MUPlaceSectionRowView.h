// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACESECTIONROWVIEW_H
#define MUPLACESECTIONROWVIEW_H

@class MKViewWithHairline, UIEditMenuInteraction, NSString;
@protocol UIEditMenuInteractionDelegate, MUSelectable;



@interface MUPlaceSectionRowView : MKViewWithHairline <UIEditMenuInteractionDelegate, MUSelectable>

 {
    UIEditMenuInteraction *_editMenuInteraction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL handlesHighlighting; // ivar: _handlesHighlighting
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCopyOnLongPress;


+(id)rowViewWithContentView:(id)arg0 ;
-(id)editMenuInteraction:(id)arg0 menuForConfiguration:(id)arg1 suggestedActions:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )editMenuInteraction:(id)arg0 targetRectForConfiguration:(id)arg1 ;
-(void)_updateBackgroundColor:(BOOL)arg0 ;
-(void)editMenuInteraction:(id)arg0 willDismissMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif