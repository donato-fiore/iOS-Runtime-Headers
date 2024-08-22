// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABSBULKFAULTHANDLER_H
#define ABSBULKFAULTHANDLER_H

@class CNFuture, NSMutableSet;
@protocol CNScheduler;

#import <Foundation/Foundation.h>

#import "ABSAddressBookContextStorage.h"

@interface ABSBulkFaultHandler : NSObject

@property (readonly, nonatomic) CNFuture *contactStoreFuture; // ivar: _contactStoreFuture
@property (readonly, nonatomic) NSObject<CNScheduler> *inlineScheduler; // ivar: _inlineScheduler
@property (nonatomic) NSInteger interest; // ivar: _interest
@property (readonly, nonatomic) NSMutableSet *keyDescriptorOfInterests; // ivar: _keyDescriptorOfInterests
@property (nonatomic) CGFloat lastRequestTimeStamp; // ivar: _lastRequestTimeStamp
@property (readonly, nonatomic) ABSAddressBookContextStorage *storage; // ivar: _storage


+(NSInteger)batchSize;
-(BOOL)withinInterestWindow;
-(id)batchOfPeopleInStorageMissingKeysIncluding:(id)arg0 ;
-(id)initWithStorage:(id)arg0 contactStoreFuture:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)store;
-(void)completePeople:(id)arg0 withKeysToFetch:(id)arg1 ;
-(void)completePerson:(id)arg0 withKeysToFetch:(id)arg1 ;
-(void)increaseInterest;
-(void)refetchContacts:(id)arg0 keysToFetch:(id)arg1 handler:(id)arg2 ;


@end


#endif