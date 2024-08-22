// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDEXTENSIONINPUTMODE_H
#define UIKEYBOARDEXTENSIONINPUTMODE_H

@class NSExtension;


#import "UIKeyboardInputMode.h"

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode

@property (retain, nonatomic) NSExtension *extension; // ivar: _extension


-(BOOL)defaultLayoutIsASCIICapable;
-(BOOL)isAllowedForTraits:(id)arg0 ;
-(BOOL)isDefaultRightToLeft;
-(BOOL)isDesiredForTraits:(id)arg0 ;
-(BOOL)isExtensionInputMode;
-(BOOL)isStalledExtensionInputMode;
-(BOOL)showSWLayoutWithHWKeyboard;
-(id)_indicatorIconWithBackground:(BOOL)arg0 ;
-(id)containingBundle;
-(id)containingBundleDisplayName;
-(id)displayName;
-(id)extendedDisplayName;
-(id)hardwareLayout;
-(id)identifierWithLayouts;
-(id)initWithIdentifier:(id)arg0 ;
-(id)normalizedIdentifierLevels;
-(void)dealloc;
-(void)setPrimaryLanguage:(id)arg0 ;


@end


#endif