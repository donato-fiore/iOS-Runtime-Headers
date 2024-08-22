// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFFILEACCESSDIALOGREQUEST_H
#define WFFILEACCESSDIALOGREQUEST_H

@class NSArray, NSString;
@protocol NSSecureCoding;


#import "WFDialogRequest.h"
#import "WFDialogButton.h"

@interface WFFileAccessDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *URLs; // ivar: _URLs
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton; // ivar: _cancelButton
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, copy, nonatomic) WFDialogButton *okButton; // ivar: _okButton
@property (readonly, copy, nonatomic) NSString *workflowID; // ivar: _workflowID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrompt:(id)arg0 message:(id)arg1 okButton:(id)arg2 cancelButton:(id)arg3 attribution:(id)arg4 workflowID:(id)arg5 URLs:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif