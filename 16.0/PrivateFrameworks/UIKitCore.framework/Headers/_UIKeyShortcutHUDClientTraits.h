// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYSHORTCUTHUDCLIENTTRAITS_H
#define _UIKEYSHORTCUTHUDCLIENTTRAITS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIKeyShortcutHUDClientTraits : NSObject <NSSecureCoding>



@property (nonatomic) BOOL globeKeyLabelHasGlobeSymbol; // ivar: _globeKeyLabelHasGlobeSymbol
@property (nonatomic) BOOL hasArabicHardwareKeyboard; // ivar: _hasArabicHardwareKeyboard
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (nonatomic, getter=isSystemApp) BOOL systemApp; // ivar: _systemApp
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


+(BOOL)supportsSecureCoding;
+(id)traitsWithReferenceTraitEnvironment:(id)arg0 referenceKeyboardEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif