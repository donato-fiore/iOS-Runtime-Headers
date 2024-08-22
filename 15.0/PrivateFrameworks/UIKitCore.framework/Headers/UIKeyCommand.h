// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYCOMMAND_H
#define UIKEYCOMMAND_H

@class NSString, NSIndexSet, BKSHIDEventDeferringEnvironment, NSArray;


#import "UICommand.h"
#import "UIEvent.h"
#import "UIViewController.h"
#import "UIResponder.h"
#import "UIImage.h"

@interface UIKeyCommand : UICommand {
    NSString *_lastLayout;
    NSIndexSet *_keyCodes;
    NSIndexSet *_layoutAwareKeyCodes;
    SEL _upAction;
    unsigned int _lastKeyboardType;
    UIEvent *_triggeringEvent;
    NSString *_segueIdentifier;
    UIViewController *_controllerForSegue;
    BOOL _buttonType;
    BOOL _repeatable;
    BOOL _isPlaceholder;
    BOOL _allowGlobeModifier;
    BOOL _handleAfterKeyEvent;
    BOOL _isInputSpecialkey;
}


@property (readonly, nonatomic) NSInteger _buttonType;
@property (readonly, nonatomic) UIViewController *_controllerForSegue;
@property (retain, nonatomic, setter=_setEventDeferringEnvironment:) BKSHIDEventDeferringEnvironment *_eventDeferringEnvironment; // ivar: __eventDeferringEnvironment
@property (readonly, nonatomic) BOOL _handleAfterKeyEvent;
@property (readonly, nonatomic) NSIndexSet *_keyCodes;
@property (retain, nonatomic) NSString *_layoutAwareDisplayInputOverride; // ivar: _layoutAwareDisplayInputOverride
@property (readonly, nonatomic) NSString *_layoutAwareInput; // ivar: _layoutAwareInput
@property (readonly, nonatomic) NSIndexSet *_layoutAwareKeyCodes;
@property (readonly, nonatomic) NSInteger _layoutAwareModifierFlags; // ivar: _layoutAwareModifierFlags
@property (nonatomic, setter=_setMatchingPriority:) NSInteger _matchingPriority; // ivar: __matchingPriority
@property (weak, nonatomic, setter=_setOriginatingResponder:) UIResponder *_originatingResponder; // ivar: __originatingResponder
@property (readonly, nonatomic) NSString *_segueIdentifier;
@property (readonly, nonatomic) UIEvent *_triggeringEvent;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) BOOL allowGlobeModifier;
@property (nonatomic) BOOL allowsAutomaticLocalization; // ivar: _allowsAutomaticLocalization
@property (nonatomic) BOOL allowsAutomaticMirroring; // ivar: _allowsAutomaticMirroring
@property (readonly, nonatomic) NSArray *alternates;
@property (nonatomic) NSUInteger attributes;
@property (readonly, nonatomic) NSString *discoverabilityInput;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *input; // ivar: _input
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) NSInteger modifierFlags; // ivar: _modifierFlags
@property (readonly, nonatomic) id *propertyList;
@property (readonly, nonatomic) BOOL repeatable;
@property (nonatomic) NSInteger state;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) SEL upAction;
@property (nonatomic) BOOL wantsPriorityOverSystemBehavior; // ivar: _wantsPriorityOverSystemBehavior


+(BOOL)supportsSecureCoding;
+(id)commandWithTitle:(id)arg0 image:(id)arg1 action:(SEL)arg2 input:(id)arg3 modifierFlags:(NSInteger)arg4 propertyList:(id)arg5 ;
+(id)commandWithTitle:(id)arg0 image:(id)arg1 action:(SEL)arg2 input:(id)arg3 modifierFlags:(NSInteger)arg4 propertyList:(id)arg5 alternates:(id)arg6 ;
+(id)commandWithTitle:(id)arg0 imageName:(id)arg1 action:(SEL)arg2 input:(id)arg3 modifierFlags:(NSInteger)arg4 ;
+(id)keyCommandWithCompactInput:(id)arg0 action:(SEL)arg1 upAction:(SEL)arg2 ;
+(id)keyCommandWithInput:(id)arg0 modifierFlags:(NSInteger)arg1 action:(SEL)arg2 ;
+(id)keyCommandWithInput:(id)arg0 modifierFlags:(NSInteger)arg1 action:(SEL)arg2 discoverabilityTitle:(id)arg3 ;
+(id)keyCommandWithInput:(id)arg0 modifierFlags:(NSInteger)arg1 action:(SEL)arg2 upAction:(SEL)arg3 ;
+(id)keyCommandWithInput:(id)arg0 modifierFlags:(NSInteger)arg1 action:(SEL)arg2 upAction:(SEL)arg3 discoverabilityTitle:(id)arg4 ;
+(id)keyCommandWithInput:(id)arg0 modifierFlags:(NSInteger)arg1 buttonType:(NSInteger)arg2 ;
+(id)keyCommandWithInput:(id)arg0 modifierFlags:(NSInteger)arg1 segueIdentifier:(id)arg2 ;
+(id)keyCommandWithInput:(id)arg0 modifierFlags:(NSInteger)arg1 segueIdentifier:(id)arg2 discoverabilityTitle:(id)arg3 ;
+(id)keyCommandWithKeyCode:(NSInteger)arg0 modifierFlags:(NSInteger)arg1 action:(SEL)arg2 ;
+(id)keyCommandWithKeyCode:(NSInteger)arg0 modifierFlags:(NSInteger)arg1 action:(SEL)arg2 discoverabilityTitle:(id)arg3 ;
+(id)keyCommandWithKeyCodes:(id)arg0 modifierFlags:(NSInteger)arg1 action:(SEL)arg2 ;
+(id)keyCommandWithKeyCodes:(id)arg0 modifierFlags:(NSInteger)arg1 buttonType:(NSInteger)arg2 ;
-(BOOL)_isKeyCommandLikelyMirrored;
-(BOOL)_isKeyCommandLocalized;
-(BOOL)_isLikelyToConflictWithTextInputForResponder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)triggerSegueIfPossible;
-(NSInteger)_leafKeyModifierFlags;
-(NSUInteger)hash;
-(id)_immutableCopy;
-(id)_initWithInput:(id)arg0 modifierFlags:(NSInteger)arg1 keyCodes:(id)arg2 action:(SEL)arg3 upAction:(SEL)arg4 discoverabilityTitle:(id)arg5 buttonType:(NSInteger)arg6 segueIdentifier:(id)arg7 ;
-(id)_keyCommandUsingAlternate:(id)arg0 ;
-(id)_leafKeyInput;
-(id)_mutableCopyIfNeeded;
-(id)_nonRepeatableKeyCommand;
-(id)_placeholderKeyCommand;
-(id)_readableStringForInputUsingWords:(BOOL)arg0 forHUD:(BOOL)arg1 outIsSingleCharacterOrKeySymbol:(*BOOL)arg2 ;
-(id)_readableStringForModifierFlagsUsingWords:(BOOL)arg0 forHUD:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommand:(id)arg0 ;
-(id)initWithKeyCommand:(id)arg0 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 imageName:(id)arg2 action:(SEL)arg3 input:(id)arg4 modifierFlags:(NSInteger)arg5 propertyList:(id)arg6 alternates:(id)arg7 discoverabilityTitle:(id)arg8 attributes:(NSUInteger)arg9 state:(NSInteger)arg10 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 imageName:(id)arg2 action:(SEL)arg3 propertyList:(id)arg4 alternates:(id)arg5 discoverabilityTitle:(id)arg6 attributes:(NSUInteger)arg7 state:(NSInteger)arg8 ;
-(id)nextResponder;
-(struct __GSKeyboard *)_currentGSKeyboard;
-(void)_localizeWithGSKeyboard:(struct __GSKeyboard *)arg0 automatically:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)_markHandleAfterKeyEvent;
-(void)_setTriggeringEvent:(id)arg0 ;
-(void)_setViewControllerForSegue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif