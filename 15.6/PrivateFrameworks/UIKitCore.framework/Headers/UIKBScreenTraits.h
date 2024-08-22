// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBSCREENTRAITS_H
#define UIKBSCREENTRAITS_H


#import <Foundation/Foundation.h>

#import "UIScreen.h"

@interface UIKBScreenTraits : NSObject {
    BOOL _isEmulatingIdiom;
    NSInteger _idiomToEmulate;
}


@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) BOOL centerFilled; // ivar: _centerFilled
@property (readonly, nonatomic) NSInteger idiom;
@property (readonly, nonatomic) BOOL isFloating; // ivar: _isFloating
@property (readonly, nonatomic) BOOL isInPopover; // ivar: _isInPopover
@property (readonly, nonatomic) BOOL isKeyboardMinorEdgeWidth; // ivar: _isKeyboardMinorEdgeWidth
@property (nonatomic) BOOL isSplit; // ivar: _isSplit
@property (nonatomic) CGFloat keyboardBarHeight; // ivar: _keyboardBarHeight
@property (readonly, nonatomic) CGSize keyboardScreenReferenceSize;
@property (nonatomic) CGFloat keyboardWidth; // ivar: _keyboardWidth
@property (readonly, nonatomic) BOOL knobInput; // ivar: _knobInput
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, nonatomic) UIScreen *screen; // ivar: _screen
@property (nonatomic) CGSize stretchFactor; // ivar: _stretchFactor
@property (nonatomic) BOOL supportsSplit; // ivar: _supportsSplit
@property (readonly, nonatomic) BOOL touchInput; // ivar: _touchInput
@property (readonly, nonatomic) BOOL touchpadInput; // ivar: _touchpadInput


+(id)_activeKeyboardWindowForScreen:(id)arg0 ;
+(id)fullScreenTraitsWithScreen:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)traitsForInputModeWithScreen:(id)arg0 ;
+(id)traitsForPopoverEmulatingWidth:(CGFloat)arg0 minorEdge:(BOOL)arg1 orientation:(NSInteger)arg2 idiom:(NSInteger)arg3 ;
+(id)traitsWithScreen:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)traitsWithScreen:(id)arg0 orientation:(NSInteger)arg1 ignoreRemoteKeyboard:(BOOL)arg2 ;
+(void)setMockIdiom:(NSInteger)arg0 ;
-(id)description;
-(id)initForInputModeWithScreen:(id)arg0 ;
-(id)initWithScreen:(id)arg0 orientation:(NSInteger)arg1 allowFloating:(BOOL)arg2 ignoreRemoteKeyboard:(BOOL)arg3 ;
-(void)updateForTextInputTraits:(id)arg0 supportedInteractionModel:(NSUInteger)arg1 ;


@end


#endif