// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFASKPARAMETERDIALOGREQUEST_H
#define WFASKPARAMETERDIALOGREQUEST_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;


#import "WFDialogRequest.h"
#import "WFDialogButton.h"

@interface WFAskParameterDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton; // ivar: _cancelButton
@property (readonly, copy, nonatomic) WFDialogButton *doneButton; // ivar: _doneButton
@property (readonly, nonatomic) BOOL focusImmediatelyWhenPresented; // ivar: _focusImmediatelyWhenPresented
@property (readonly, copy, nonatomic) NSString *parameterKey; // ivar: _parameterKey
@property (readonly, copy, nonatomic) NSDictionary *serializedParameterStates; // ivar: _serializedParameterStates
@property (readonly, nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithActionIdentifier:(id)arg0 parameterKey:(id)arg1 serializedParameterStates:(id)arg2 style:(NSInteger)arg3 attribution:(id)arg4 prompt:(id)arg5 focusImmediatelyWhenPresented:(BOOL)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(id)requestBySettingFocusImmediatelyWhenPresented:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif