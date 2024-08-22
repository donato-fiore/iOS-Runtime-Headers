// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKCONFIRMATIONDIALOGREQUEST_H
#define WFLINKCONFIRMATIONDIALOGREQUEST_H

@class WFDialogButton, NSString;
@protocol NSSecureCoding;


#import "WFLinkSnippetDialogRequest.h"

@interface WFLinkConfirmationDialogRequest : WFLinkSnippetDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) WFDialogButton *noButton; // ivar: _noButton
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) WFDialogButton *yesButton; // ivar: _yesButton


+(BOOL)supportsSecureCoding;
-(id)initWithActionMetadata:(id)arg0 dialogString:(id)arg1 viewSnippet:(id)arg2 yesText:(id)arg3 noText:(id)arg4 attribution:(id)arg5 ;
-(id)initWithActionParameterMetadata:(id)arg0 dialogString:(id)arg1 viewSnippet:(id)arg2 attribution:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 viewSnippet:(id)arg2 yesText:(id)arg3 noText:(id)arg4 attribution:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif