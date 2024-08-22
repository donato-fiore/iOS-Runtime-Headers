// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFBASICDIALOG_H
#define SFBASICDIALOG_H

@class NSArray, NSString;


#import "SFDialog.h"

@interface SFBasicDialog : SFDialog

@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSArray *additionalCancellationExemptions; // ivar: _additionalCancellationExemptions
@property (nonatomic) BOOL alertControllerPresentsAsActionSheet; // ivar: _alertControllerPresentsAsActionSheet
@property (nonatomic) BOOL canceledOnApplicationBackground; // ivar: _canceledOnApplicationBackground
@property (nonatomic) BOOL canceledOnCommittedNavigation; // ivar: _canceledOnCommittedNavigation
@property (nonatomic) BOOL canceledOnProvisionalNavigation; // ivar: _canceledOnProvisionalNavigation
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) BOOL completionHandlerBlocksWebProcess; // ivar: _completionHandlerBlocksWebProcess
@property (copy, nonatomic) NSString *defaultPassword; // ivar: _defaultPassword
@property (copy, nonatomic) NSString *defaultText; // ivar: _defaultText
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *passwordPlaceholder; // ivar: _passwordPlaceholder
@property (nonatomic) NSInteger presentationStyle; // ivar: _presentationStyle
@property (nonatomic) BOOL shouldHideWebContent; // ivar: _shouldHideWebContent
@property (copy, nonatomic) NSString *textPlaceholder; // ivar: _textPlaceholder
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)newDialogViewRepresentation;
-(id)newViewControllerRepresentationWithCompletionHandler:(id)arg0 ;
-(void)didCompleteWithResponse:(id)arg0 ;


@end


#endif