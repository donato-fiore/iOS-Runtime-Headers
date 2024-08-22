// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUIINPUTASSISTANTHOSTVIEW_H
#define TUIINPUTASSISTANTHOSTVIEW_H

@class UIView, NSArray;


#import "TUIInputAccessoryBackdropView.h"
#import "TUIInputAssistantBackdropView.h"
#import "TUISystemInputAssistantView.h"

@interface TUIInputAssistantHostView : UIView

@property (retain, nonatomic) NSArray *inputAccessoryBackdropConstraints; // ivar: _inputAccessoryBackdropConstraints
@property (readonly, nonatomic) TUIInputAccessoryBackdropView *inputAccessoryBackdropView; // ivar: _inputAccessoryBackdropView
@property (retain, nonatomic) UIView *inputAccessoryView; // ivar: _inputAccessoryView
@property (retain, nonatomic) NSArray *inputAssistantBackdropConstraints; // ivar: _inputAssistantBackdropConstraints
@property (readonly, nonatomic) TUIInputAssistantBackdropView *inputAssistantBackdropView; // ivar: _inputAssistantBackdropView
@property (nonatomic, setter=setCompact:) BOOL isCompact; // ivar: _isCompact
@property (retain, nonatomic) TUISystemInputAssistantView *systemInputAssistantView; // ivar: _systemInputAssistantView
@property (nonatomic) CGAffineTransform transformForContent;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)ensureInputAssistantConstraints;
-(void)updateInputAccessoryBackdrop;
-(void)updateInputAssistantBackdrop;


@end


#endif