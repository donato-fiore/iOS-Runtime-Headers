// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTEXTINPUTPARAMETER_H
#define WFTEXTINPUTPARAMETER_H

@class NSString;
@protocol WFParameterDialogProvider;


#import "WFParameter.h"

@interface WFTextInputParameter : WFParameter <WFParameterDialogProvider>



@property (readonly, nonatomic) BOOL autoPeriodsDisabled; // ivar: _autoPeriodsDisabled
@property (readonly, nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (readonly, nonatomic) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger hintDisplayMode; // ivar: _hintDisplayMode
@property (readonly, nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (readonly, nonatomic, getter=isMonospace) BOOL monospace; // ivar: _monospace
@property (readonly, nonatomic, getter=isMultiline) BOOL multiline; // ivar: _multiline
@property (copy, nonatomic) NSString *prefix; // ivar: _prefix
@property (readonly, nonatomic) BOOL processesIntoContentItems; // ivar: _processesIntoContentItems
@property (readonly, nonatomic) NSString *returnKeyType;
@property (readonly, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // ivar: _secureTextEntry
@property (readonly, nonatomic) BOOL smartDashesDisabled; // ivar: _smartDashesDisabled
@property (readonly, nonatomic) BOOL smartQuotesDisabled; // ivar: _smartQuotesDisabled
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger syntaxHighlightingType; // ivar: _syntaxHighlightingType
@property (readonly, nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (readonly, copy, nonatomic) NSString *textContentType; // ivar: _textContentType
@property (readonly, nonatomic) BOOL textReplacementDisabled; // ivar: _textReplacementDisabled


-(BOOL)shouldAlignLabels;
-(Class)singleStateClass;
-(id)createDialogTextFieldConfigurationWithDefaultState:(id)arg0 ;
-(id)defaultSerializedRepresentation;
-(id)defaultSupportedVariableTypes;
-(id)hintForState:(id)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)parameterStateFromDialogResponse:(id)arg0 ;
-(void)createDialogRequestWithAttribution:(id)arg0 defaultState:(id)arg1 prompt:(id)arg2 completionHandler:(id)arg3 ;
-(void)setLocalizedPlaceholder:(id)arg0 ;


@end


#endif