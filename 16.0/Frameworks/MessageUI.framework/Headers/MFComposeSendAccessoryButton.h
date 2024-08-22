// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCOMPOSESENDACCESSORYBUTTON_H
#define MFCOMPOSESENDACCESSORYBUTTON_H

@class UIButton, NSString;
@protocol UIPointerInteractionDelegate;



@interface MFComposeSendAccessoryButton : UIButton <UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)buttonWithType:(NSInteger)arg0 ;
-(id)_pointerShapeForTargetedPreview:(id)arg0 ;
-(id)_preview;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif