// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNREPUTATIONCONTACTSADAPTER_H
#define CNREPUTATIONCONTACTSADAPTER_H

@protocol CNSchedulerProvider, CNScheduler;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"

@interface CNReputationContactsAdapter : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly, nonatomic) NSObject<CNScheduler> *storeScheduler; // ivar: _storeScheduler


-(id)contactsForEmailAddress:(id)arg0 ;
-(id)contactsForPhoneNumber:(id)arg0 ;
-(id)contactsForPredicate:(id)arg0 keys:(id)arg1 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 schedulerProvider:(id)arg1 ;


@end


#endif