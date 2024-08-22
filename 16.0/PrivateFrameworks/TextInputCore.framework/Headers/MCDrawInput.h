// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCDRAWINPUT_H
#define MCDRAWINPUT_H



#import "MCKeyboardInput.h"

@interface MCDrawInput : MCKeyboardInput

@property (readonly, nonatomic) CGRect currentLayoutCharacterKeysFrame; // ivar: _currentLayoutCharacterKeysFrame
@property (nonatomic) int drawHand; // ivar: _drawHand
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) BOOL isCompleting;
@property (readonly, nonatomic) BOOL isDrawing;
@property (readonly, nonatomic) RefPtr<TI::Favonius::KeyboardLayout> keyboardLayout; // ivar: _keyboardLayout
@property (readonly, nonatomic) *void resampler; // ivar: _resampler


-(BOOL)_canCompose;
-(BOOL)canComposeNew:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithKeyboardLayout:(*void)arg0 ;
-(id)initWithKeyboardLayout:(*void)arg0 currentLayoutCharacterKeysFrame:(struct CGRect )arg1 ;
-(struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL> )copyLayoutKeys;
-(void)_appendAndResampleWithPoint:(struct CGPoint )arg0 timestamp:(CGFloat)arg1 force:(CGFloat)arg2 radius:(CGFloat)arg3 shouldFinalize:(BOOL)arg4 ;
-(void)_updateSampledInputs;
-(void)_updateSampledInputsWithResampler:(*void)arg0 permanentlyFinalized:(BOOL)arg1 ;
-(void)composeNew:(id)arg0 ;
-(void)composeWith:(id)arg0 ;


@end


#endif