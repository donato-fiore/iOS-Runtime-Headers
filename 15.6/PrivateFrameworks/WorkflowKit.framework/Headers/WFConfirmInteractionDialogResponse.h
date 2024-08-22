// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONFIRMINTERACTIONDIALOGRESPONSE_H
#define WFCONFIRMINTERACTIONDIALOGRESPONSE_H

@protocol NSSecureCoding;


#import "WFDialogResponse.h"

@interface WFConfirmInteractionDialogResponse : WFDialogResponse <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger interactionResponseCode; // ivar: _interactionResponseCode


+(BOOL)supportsSecureCoding;
-(BOOL)shouldDismissDialogInTransientMode;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInteractionResponseCode:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif