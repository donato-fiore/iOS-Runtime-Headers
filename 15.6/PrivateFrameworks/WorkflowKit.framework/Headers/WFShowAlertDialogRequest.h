// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSHOWALERTDIALOGREQUEST_H
#define WFSHOWALERTDIALOGREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "WFDialogRequest.h"
#import "WFDialogButton.h"

@interface WFShowAlertDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) WFDialogButton *cancelButton; // ivar: _cancelButton
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, copy, nonatomic) WFDialogButton *okButton; // ivar: _okButton


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrompt:(id)arg0 message:(id)arg1 cancelButton:(id)arg2 attribution:(id)arg3 ;
-(id)initWithPrompt:(id)arg0 message:(id)arg1 okButton:(id)arg2 cancelButton:(id)arg3 attribution:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif