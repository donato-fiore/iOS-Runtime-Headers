// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCESSRESOURCEAUTHORIZATIONDIALOGREQUEST_H
#define WFACCESSRESOURCEAUTHORIZATIONDIALOGREQUEST_H



#import "WFDialogRequest.h"
#import "WFDialogButton.h"
#import "WFAccessResourceAuthorizationConfiguration.h"

@interface WFAccessResourceAuthorizationDialogRequest : WFDialogRequest

@property (readonly, copy, nonatomic) WFDialogButton *allowButton; // ivar: _allowButton
@property (readonly, nonatomic) WFAccessResourceAuthorizationConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) WFDialogButton *dontAllowButton; // ivar: _dontAllowButton


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 attribution:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif