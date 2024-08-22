// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT20MANAGEDORDERMERCHANT_H
#define _TTC10FINANCEKIT20MANAGEDORDERMERCHANT_H

@class NSManagedObject, CNPostalAddress, NSURL, NSString;


#import "_TtC10FinanceKit15LocalizedString.h"

@interface _TtC10FinanceKit20ManagedOrderMerchant : NSManagedObject

@property (nonatomic, retain) CNPostalAddress *address;
@property (nonatomic, copy) NSURL *businessChatURL;
@property (nonatomic, copy) NSURL *contactURL;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *displayName;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *logoName;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSURL *url;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif