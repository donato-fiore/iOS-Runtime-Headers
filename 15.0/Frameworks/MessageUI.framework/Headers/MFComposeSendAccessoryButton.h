// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCOMPOSESENDACCESSORYBUTTON_H
#define MFCOMPOSESENDACCESSORYBUTTON_H

@class UIButton, NSString;
@protocol _UICursorInteractionDelegate;



@interface MFComposeSendAccessoryButton : UIButton <_UICursorInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)buttonWithType:(NSInteger)arg0 ;
-(id)_cursorForTargetedPreview:(id)arg0 ;
-(id)_preview;
-(id)cursorInteraction:(id)arg0 regionForLocation:(struct CGPoint )arg1 defaultRegion:(id)arg2 ;
-(id)cursorInteraction:(id)arg0 styleForRegion:(id)arg1 modifiers:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif