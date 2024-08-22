// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYBOARDCHANGEDINFORMATION_H
#define _UIKEYBOARDCHANGEDINFORMATION_H

@class BKSAnimationFenceHandle, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIKeyboardChangedInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) BKSAnimationFenceHandle *animationFence; // ivar: _animationFence
@property (nonatomic) BOOL avoidIntersectability; // ivar: _avoidIntersectability
@property (copy, nonatomic) NSString *hostBundleIdentifier; // ivar: _hostBundleIdentifier
@property (readonly) BOOL keyboardOnScreen; // ivar: _keyboardOnScreen
@property (readonly) CGRect keyboardPosition; // ivar: _keyboardPosition
@property (readonly) CGRect keyboardPositionWithIAV; // ivar: _keyboardPositionWithIAV
@property CGRect keyboardPositionWithRemoteIAV; // ivar: _keyboardPositionWithRemoteIAV
@property (copy, nonatomic) NSString *keyboardPreserveKey; // ivar: _keyboardPreserveKey
@property (nonatomic) BOOL multipleScenes; // ivar: _multipleScenes
@property (readonly) BOOL shouldRestoreKeyboard; // ivar: _shouldRestoreKeyboard
@property (nonatomic) BOOL shouldTakeSnapshot; // ivar: _shouldTakeSnapshot
@property (copy, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (copy, nonatomic) NSString *sourceDisplayIdentifier; // ivar: _sourceDisplayIdentifier
@property (copy, nonatomic) NSString *sourceSceneIdentityString; // ivar: _sourceSceneIdentityString


+(BOOL)supportsSecureCoding;
+(id)informationForKeyboardDown;
+(id)informationForKeyboardPreserve:(id)arg0 ;
+(id)informationForKeyboardRestore:(id)arg0 ;
+(id)informationForKeyboardUp:(struct CGRect )arg0 withIAV:(struct CGRect )arg1 ;
-(id)copyWithIntersectability:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithoutFence;
-(id)copyWithoutIAV;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyboardRect:(struct CGRect )arg0 iavPosition:(struct CGRect )arg1 onScreen:(BOOL)arg2 takeSnapshot:(BOOL)arg3 fence:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetAnimationFencing;


@end


#endif