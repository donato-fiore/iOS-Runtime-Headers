// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKIT23MANAGEDORDERAPPLICATION_H
#define _TTC10FINANCEKIT23MANAGEDORDERAPPLICATION_H

@class NSManagedObject, NSURL;



@interface _TtC10FinanceKit23ManagedOrderApplication : NSManagedObject

@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic) short positionIndex;
@property (nonatomic) NSInteger storeIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif