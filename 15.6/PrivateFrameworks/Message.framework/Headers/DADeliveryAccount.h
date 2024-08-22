// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DADELIVERYACCOUNT_H
#define DADELIVERYACCOUNT_H



#import "DeliveryAccount.h"
#import "DAMailAccount.h"

@interface DADeliveryAccount : DeliveryAccount {
    DAMailAccount *_DAMailAccount;
}




+(id)accountTypeIdentifier;
-(Class)deliveryClass;
-(id)initWithDAMailAccount:(id)arg0 ;
-(id)mailAccountIfAvailable;
-(id)newDeliveryWithHeaders:(id)arg0 HTML:(id)arg1 plainTextAlternative:(id)arg2 other:(id)arg3 ;
-(id)newDeliveryWithHeaders:(id)arg0 mixedContent:(id)arg1 textPartsAreHTML:(BOOL)arg2 ;
-(id)newDeliveryWithMessage:(id)arg0 ;


@end


#endif