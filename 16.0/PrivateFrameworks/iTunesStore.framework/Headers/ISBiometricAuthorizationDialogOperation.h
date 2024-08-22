// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISBIOMETRICAUTHORIZATIONDIALOGOPERATION_H
#define ISBIOMETRICAUTHORIZATIONDIALOGOPERATION_H

@class SSBiometricAuthenticationContext, NSDictionary, NSURL, NSString;
@protocol OS_dispatch_queue;


#import "ISOperation.h"
#import "ISURLBag.h"
#import "ISDialog.h"
#import "ISDialogButton.h"
#import "ISTouchIDDialog.h"

@interface ISBiometricAuthorizationDialogOperation : ISOperation {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ISURLBag *_urlBag;
}


@property (retain) SSBiometricAuthenticationContext *biometricAuthenticationContext; // ivar: _context
@property (copy) NSDictionary *buyParams; // ivar: _buyParams
@property (readonly) ISDialog *dialog; // ivar: _dialog
@property (retain) ISDialog *fallbackDialog; // ivar: _fallbackDialog
@property (copy) NSDictionary *metricsDictionary; // ivar: _metricsDictionary
@property (readonly) NSURL *redirectURL; // ivar: _redirectURL
@property (readonly) ISDialogButton *selectedButton; // ivar: _selectedButton
@property (retain) ISTouchIDDialog *touchIDDialog; // ivar: _touchIDDialog
@property (copy) NSString *userAgent; // ivar: _userAgent


-(BOOL)_runAuthkitOperationWithError:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)_runSignatureOperationReturningError:(*id)arg0 ;
-(BOOL)_shouldFallbackToAuthKitForError:(id)arg0 ;
-(id)initWithTouchIDDialog:(id)arg0 fallbackDialog:(id)arg1 ;
-(void)_findSelectedButtonForButtons:(id)arg0 ;
-(void)_loadURLBag;
-(void)_performMetricsWithBiometricMatch:(NSUInteger)arg0 didBiometricsFail:(BOOL)arg1 ;
-(void)run;


@end


#endif