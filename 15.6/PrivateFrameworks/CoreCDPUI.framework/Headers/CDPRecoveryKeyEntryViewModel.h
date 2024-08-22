// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPRECOVERYKEYENTRYVIEWMODEL_H
#define CDPRECOVERYKEYENTRYVIEWMODEL_H

@class CDPContext;
@protocol CDPRecoveryKeyValidator, CDPRemoteDeviceSecretValidatorProtocol;

#import <Foundation/Foundation.h>


@interface CDPRecoveryKeyEntryViewModel : NSObject {
    CDPContext *_context;
    id<CDPRecoveryKeyValidator> *_validator;
    id<CDPRemoteDeviceSecretValidatorProtocol> *_secretValidator;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property BOOL isFooterForVerifyFlow; // ivar: _isFooterForVerifyFlow
@property (readonly) int mode; // ivar: _mode
@property BOOL shouldSuppressCancelButton; // ivar: _shouldSuppressCancelButton


-(BOOL)mandatesRecoveryKey;
-(BOOL)supportsRKRecovery;
-(id)footerButtonTitle;
-(id)footerLabelText;
-(id)headerSubtitle;
-(id)headerTitle;
-(id)initWithContext:(id)arg0 validator:(id)arg1 ;
-(id)initWithContext:(id)arg0 validator:(id)arg1 mode:(int)arg2 ;
-(id)placeholderText;
-(id)recoveryKey;
-(void)handleCancel;
-(void)handleForgotRecoveryKeyWithCDPStateError:(NSInteger)arg0 ;
-(void)handleNoRecoveryKeyWithCDPStateError:(NSInteger)arg0 ;
-(void)processCollectedRecoveryKey:(id)arg0 completion:(id)arg1 ;


@end


#endif