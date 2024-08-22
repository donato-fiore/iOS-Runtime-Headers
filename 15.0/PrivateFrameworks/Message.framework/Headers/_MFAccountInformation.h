// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFACCOUNTINFORMATION_H
#define _MFACCOUNTINFORMATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "MailAccount.h"
#import "DeliveryAccount.h"

@interface _MFAccountInformation : NSObject

@property (retain, nonatomic) MailAccount *account; // ivar: _account
@property (retain, nonatomic) DeliveryAccount *deliveryAccount; // ivar: _deliveryAccount
@property (retain, nonatomic) NSDictionary *localizedNotes; // ivar: _localizedNotes




@end


#endif