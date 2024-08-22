// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10FINANCEKIT19MANAGEDORDERBARCODE_H
#define _TTC10FINANCEKIT19MANAGEDORDERBARCODE_H

@class NSManagedObject, NSString;


#import "_TtC10FinanceKit15LocalizedString.h"

@interface _TtC10FinanceKit19ManagedOrderBarcode : NSManagedObject

@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *altText;
@property (nonatomic) short formatValue;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *messageEncoding;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif