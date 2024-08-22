// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSENDERREPOSITORY_H
#define EDSENDERREPOSITORY_H

@protocol EFScheduler;

#import <Foundation/Foundation.h>

#import "EDSenderPersistence.h"

@interface EDSenderRepository : NSObject

@property (readonly, nonatomic) NSObject<EFScheduler> *persistenceScheduler; // ivar: _persistenceScheduler
@property (readonly, nonatomic) EDSenderPersistence *senderPersistence; // ivar: _senderPersistence


-(id)initWithSenderPersistence:(id)arg0 ;
-(void)simpleAddressesForRelevantSendersForSearchWithCompletionHandler:(id)arg0 ;


@end


#endif