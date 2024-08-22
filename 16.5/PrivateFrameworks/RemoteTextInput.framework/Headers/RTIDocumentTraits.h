// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIDOCUMENTTRAITS_H
#define RTIDOCUMENTTRAITS_H

@class NSIndexSet, NSArray, NSString, NSDictionary, CAFenceHandle, TIInputContextHistory, NSData, TITextInputTraits;
@protocol NSCopying, NSSecureCoding, NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTIAssistantItem.h"
#import "RTIInputViewInfo.h"

@interface RTIDocumentTraits : NSObject <NSCopying, NSSecureCoding>

 {
    ? _textInputTraitsMask;
}


@property (retain, nonatomic) NSIndexSet *PINEntrySeparatorIndexes; // ivar: _PINEntrySeparatorIndexes
@property (copy, nonatomic) NSArray *additionalLocaleIdentifiers; // ivar: _additionalLocaleIdentifiers
@property (copy, nonatomic) NSString *appId; // ivar: _appId
@property (copy, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) RTIAssistantItem *assistantItem; // ivar: _assistantItem
@property (retain, nonatomic) RTIInputViewInfo *assistantViewInfo; // ivar: _assistantViewInfo
@property (retain, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (retain, nonatomic) NSDictionary *autofillContext; // ivar: _autofillContext
@property (nonatomic) NSUInteger autofillMode; // ivar: _autofillMode
@property (nonatomic) NSUInteger autofillSubMode; // ivar: _autofillSubMode
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) unsigned int contextID; // ivar: _contextID
@property (nonatomic) NSUInteger delegateConformanceType; // ivar: _delegateConformanceType
@property (nonatomic) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableAutomaticKeyboardUI;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (copy, nonatomic) NSArray *enabledSupplementalLexiconIdentifiers; // ivar: _enabledSupplementalLexiconIdentifiers
@property (retain, nonatomic) CAFenceHandle *fenceHandle; // ivar: _fenceHandle
@property (nonatomic) BOOL hidePrediction;
@property (retain, nonatomic) TIInputContextHistory *inputContextHistory; // ivar: _inputContextHistory
@property (retain, nonatomic) RTIInputViewInfo *inputViewInfo; // ivar: _inputViewInfo
@property (nonatomic) NSUInteger layerID; // ivar: _layerID
@property (copy, nonatomic) NSString *localizedAppName; // ivar: _localizedAppName
@property (copy, nonatomic) NSString *passwordRules; // ivar: _passwordRules
@property (nonatomic) int processId; // ivar: _processId
@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (copy, nonatomic) NSString *recipientId; // ivar: _recipientId
@property (copy, nonatomic) NSObject<NSCopying><NSSecureCoding> *responderId; // ivar: _responderId
@property (copy, nonatomic) NSString *responseContext; // ivar: _responseContext
@property (copy, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (nonatomic) BOOL shouldLoadAutofillSignUp;
@property (copy, nonatomic) NSArray *supportedPayloadIds; // ivar: _supportedPayloadIds
@property (nonatomic) BOOL supportsImagePaste;
@property (copy, nonatomic) NSString *textInputContextIdentifier; // ivar: _textInputContextIdentifier
@property (retain, nonatomic) NSData *textInputModeData; // ivar: _textInputModeData
@property (retain, nonatomic) TITextInputTraits *textInputTraits; // ivar: _textInputTraits
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (nonatomic) _NSRange validTextRange; // ivar: _validTextRange


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)copyContextualPropertiesFromDocumentTraits:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif