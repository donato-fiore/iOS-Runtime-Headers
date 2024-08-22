// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUIINPUTACCESSORYBACKDROPVIEW_H
#define TUIINPUTACCESSORYBACKDROPVIEW_H

@class UIVisualEffectView;
@protocol TUIInputAccessoryViewTraits;



@interface TUIInputAccessoryBackdropView : UIVisualEffectView

@property (retain, nonatomic) NSObject<TUIInputAccessoryViewTraits> *inputAccessoryViewTraits; // ivar: _inputAccessoryViewTraits


-(void)_setRenderConfig:(id)arg0 ;
-(void)updateVisualStyle;


@end


#endif