// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIINPUTVIEWCONTROLLERSTATE_H
#define _UIINPUTVIEWCONTROLLERSTATE_H

@class NSUUID, TIDocumentState, TITextInputTraits;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UITextInputMode.h"

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *documentIdentifier; // ivar: _documentIdentifier
@property (retain, nonatomic) UITextInputMode *documentInputMode; // ivar: _documentInputMode
@property (retain, nonatomic) TIDocumentState *documentState; // ivar: _documentState
@property (nonatomic) BOOL needsInputModeSwitchKey; // ivar: _needsInputModeSwitchKey
@property (retain, nonatomic) TITextInputTraits *textInputTraits; // ivar: _textInputTraits


+(BOOL)supportsSecureCoding;
+(id)stateForKeyboardState:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)createDocumentStateIfNecessary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif