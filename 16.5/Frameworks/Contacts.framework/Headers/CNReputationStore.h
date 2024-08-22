// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNREPUTATIONSTORE_H
#define CNREPUTATIONSTORE_H

@protocol CNSchedulerProvider;

#import <Foundation/Foundation.h>

#import "CNReputationContactsAdapter.h"
#import "CNReputationCoreRecentsAdapter.h"
#import "CNReputationLogger.h"

@interface CNReputationStore : NSObject

@property (readonly, nonatomic) CNReputationContactsAdapter *contactsAdapter; // ivar: _contactsAdapter
@property (readonly, nonatomic) CNReputationCoreRecentsAdapter *coreRecentsAdapter; // ivar: _coreRecentsAdapter
@property (readonly, nonatomic) CNReputationLogger *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider


-(id)init;
-(id)initWithCoreRecentsAdapter:(id)arg0 contactsAdapter:(id)arg1 logger:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)makeFutureForHandle:(id)arg0 ;
-(id)reputationForHandle:(id)arg0 timeout:(CGFloat)arg1 error:(*id)arg2 ;


@end


#endif