// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKCONFIRMATIONDIALOGRESPONSE_H
#define WFLINKCONFIRMATIONDIALOGRESPONSE_H



#import "WFLinkSnippetDialogResponse.h"

@interface WFLinkConfirmationDialogResponse : WFLinkSnippetDialogResponse

@property (readonly, nonatomic) NSUInteger requestResponseCode; // ivar: _requestResponseCode


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)shouldDismissDialogInTransientMode;
-(id)description;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfirmationResponseCode:(NSUInteger)arg0 ;
-(id)initWithRequestedOpenURL:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif