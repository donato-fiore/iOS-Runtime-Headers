// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT20MANAGEDWALLETMESSAGE_H
#define _TTC10FINANCEKIT20MANAGEDWALLETMESSAGE_H

@class NSManagedObject, NSString, NSDate;



@interface _TtC10FinanceKit20ManagedWalletMessage : NSManagedObject

@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) BOOL isRegistered;
@property (nonatomic) short messageTypeValue;
@property (nonatomic, copy) NSString *orderFulfillmentIdentifier;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic) NSInteger priority;
@property (nonatomic, copy) NSString *title;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;
-(void)didSave;


@end


#endif