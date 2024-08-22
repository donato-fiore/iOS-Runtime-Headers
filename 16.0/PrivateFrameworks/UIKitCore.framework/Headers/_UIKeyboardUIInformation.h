// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDUIINFORMATION_H
#define _UIKEYBOARDUIINFORMATION_H

@class BKSAnimationFenceHandle, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIKeyboardUIInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly) BOOL animated; // ivar: _animated
@property (readonly, copy) BKSAnimationFenceHandle *animationFence; // ivar: _animationFence
@property (copy, nonatomic) NSString *currentInputMode; // ivar: _currentInputMode
@property BOOL isLocal; // ivar: _isLocal
@property (readonly) BOOL keyboardOnScreen; // ivar: _keyboardOnScreen
@property (readonly) CGRect keyboardPosition; // ivar: _keyboardPosition
@property (readonly) NSInteger orientation; // ivar: _orientation
@property (readonly) BOOL tracking; // ivar: _tracking
@property NSUInteger uiPosition; // ivar: _uiPosition


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithoutFence;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyboardFrame:(struct CGRect )arg0 onScreen:(BOOL)arg1 animated:(BOOL)arg2 tracking:(BOOL)arg3 fence:(id)arg4 ;
-(id)initWithKeyboardFrame:(struct CGRect )arg0 onScreen:(BOOL)arg1 animated:(BOOL)arg2 tracking:(BOOL)arg3 orientation:(NSInteger)arg4 fence:(id)arg5 ;
-(id)initWithKeyboardFrame:(struct CGRect )arg0 onScreen:(BOOL)arg1 animated:(BOOL)arg2 tracking:(BOOL)arg3 orientation:(NSInteger)arg4 wantsFence:(BOOL)arg5 ;
-(id)initWithKeyboardFrame:(struct CGRect )arg0 onScreen:(BOOL)arg1 animated:(BOOL)arg2 tracking:(BOOL)arg3 wantsFence:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetAnimationFencing;


@end


#endif