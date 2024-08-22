// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNACTIONOUTPUT_H
#define LNACTIONOUTPUT_H

@class LNDialog, NSUUID, LNAction, LNValue;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNConfirmationActionName.h"
#import "LNViewSnippet.h"

@interface LNActionOutput : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) LNConfirmationActionName *confirmationActionName; // ivar: _confirmationActionName
@property (readonly, nonatomic, getter=isDeferred) BOOL deferred; // ivar: _deferred
@property (readonly, nonatomic) LNDialog *dialog; // ivar: _dialog
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) LNAction *nextAction; // ivar: _nextAction
@property (readonly, nonatomic) LNAction *showOutputAction; // ivar: _showOutputAction
@property (readonly, nonatomic, getter=shouldShowPrompt) BOOL showPrompt; // ivar: _showPrompt
@property (readonly, nonatomic) LNValue *value; // ivar: _value
@property (readonly, nonatomic) LNViewSnippet *viewSnippet; // ivar: _viewSnippet


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dialog:(id)arg1 viewSnippet:(id)arg2 value:(id)arg3 showOutputAction:(id)arg4 deferred:(BOOL)arg5 nextAction:(id)arg6 confirmationActionName:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 dialog:(id)arg1 viewSnippet:(id)arg2 value:(id)arg3 showOutputAction:(id)arg4 deferred:(BOOL)arg5 nextAction:(id)arg6 confirmationActionName:(id)arg7 showPrompt:(BOOL)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif