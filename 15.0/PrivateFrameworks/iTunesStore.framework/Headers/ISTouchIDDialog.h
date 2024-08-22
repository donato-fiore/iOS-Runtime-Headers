// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISTOUCHIDDIALOG_H
#define ISTOUCHIDDIALOG_H

@class NSLock, SSPaymentSheet, NSString;


#import "ISDialog.h"

@interface ISTouchIDDialog : ISDialog {
    NSLock *_lock;
    SSPaymentSheet *_paymentSheet;
}


@property (copy, nonatomic) NSString *body; // ivar: _body
@property (copy) NSString *fallbackExplanation;
@property (copy) NSString *fallbackMessage;
@property (readonly) BOOL isDualAction; // ivar: _isDualAction
@property (nonatomic) BOOL isFree; // ivar: _isFree
@property (copy, nonatomic) NSString *username; // ivar: _username


-(id)buttonForButtonType:(NSInteger)arg0 ;
-(id)initWithDialogDictionary:(id)arg0 ;
-(id)paymentSheet;
-(void)_init;
-(void)_parseDialogDictionary:(id)arg0 ;


@end


#endif