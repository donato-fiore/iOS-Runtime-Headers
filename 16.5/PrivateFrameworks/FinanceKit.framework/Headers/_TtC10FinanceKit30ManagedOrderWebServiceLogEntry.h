// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT30MANAGEDORDERWEBSERVICELOGENTRY_H
#define _TTC10FINANCEKIT30MANAGEDORDERWEBSERVICELOGENTRY_H

@class NSManagedObject, NSDate, NSString;


#import "_TtC10FinanceKit22ManagedOrderWebService.h"

@interface _TtC10FinanceKit30ManagedOrderWebServiceLogEntry : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) short levelValue;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif