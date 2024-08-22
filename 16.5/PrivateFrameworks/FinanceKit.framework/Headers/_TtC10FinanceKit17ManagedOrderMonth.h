// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT17MANAGEDORDERMONTH_H
#define _TTC10FINANCEKIT17MANAGEDORDERMONTH_H

@class NSManagedObject, NSSet;



@interface _TtC10FinanceKit17ManagedOrderMonth : NSManagedObject

@property (nonatomic) short countOfOrders;
@property (nonatomic) short countOfOrdersThatShowAsActive;
@property (nonatomic) short month;
@property (nonatomic, copy) NSSet *orders;
@property (nonatomic) short year;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif