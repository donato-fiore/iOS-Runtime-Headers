// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONFIRMINTERACTIONDIALOGREQUEST_H
#define WFCONFIRMINTERACTIONDIALOGREQUEST_H

@class INInteraction;
@protocol NSSecureCoding;


#import "WFDialogRequest.h"
#import "WFDialogButton.h"

@interface WFConfirmInteractionDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) WFDialogButton *cancelButton; // ivar: _cancelButton
@property (readonly, copy, nonatomic) WFDialogButton *confirmButton; // ivar: _confirmButton
@property (readonly, copy, nonatomic) INInteraction *interaction; // ivar: _interaction


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInteraction:(id)arg0 prompt:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif