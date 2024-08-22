// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFloatingKeyboardVisible; // ivar: isFloatingKeyboardVisible
@property (readonly) Class superclass;


-(BOOL)_shouldSuppressAssistantBarForDelegate:(id)arg0 ;
-(BOOL)_shouldSuppressForDelegate:(id)arg0 ;
-(BOOL)_shouldSuppressKeyboardUIForDelegate:(id)arg0 checkSource:(BOOL)arg1 ;
-(BOOL)isSupportedForTextInputTraits:(id)arg0 ;
-(id)_recognitionLocaleIdentifier;
-(void)updateKeyboardSuppressionPolicy;


@end


#endif