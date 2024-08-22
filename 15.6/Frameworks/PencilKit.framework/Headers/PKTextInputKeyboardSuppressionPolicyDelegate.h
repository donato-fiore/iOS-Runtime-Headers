// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTKEYBOARDSUPPRESSIONPOLICYDELEGATE_H
#define PKTEXTINPUTKEYBOARDSUPPRESSIONPOLICYDELEGATE_H

@class NSString;
@protocol _UIKeyboardSuppressionPolicyDelegate, PKTextInputSupportedElementDelegate;

#import <Foundation/Foundation.h>


@interface PKTextInputKeyboardSuppressionPolicyDelegate : NSObject <_UIKeyboardSuppressionPolicyDelegate, PKTextInputSupportedElementDelegate>

 {
    BOOL _isQueryingLocaleIdentifier;
}


@property (nonatomic) BOOL _suppressLocaleIdentifier; // ivar: _suppressLocaleIdentifier
@property (nonatomic) BOOL allowFloatingPencilKeyboard; // ivar: allowFloatingPencilKeyboard
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)keyboardHasInputOrAssistantViewsOnScreen;
-(BOOL)_shouldSuppressAssistantBarForDelegate:(id)arg0 ;
-(BOOL)_shouldSuppressForDelegate:(id)arg0 ;
-(BOOL)_shouldSuppressKeyboardUIForDelegate:(id)arg0 checkSource:(BOOL)arg1 ;
-(BOOL)isSupportedForTextInputTraits:(id)arg0 ;
-(id)_recognitionLocaleIdentifier;
-(void)updateKeyboardSuppressionPolicy;


@end


#endif