// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNREPUTATIONFUTUREBUILDER_H
#define CNREPUTATIONFUTUREBUILDER_H

@class CNFuture;

#import <Foundation/Foundation.h>

#import "CNReputationContactsAdapter.h"
#import "CNReputationCoreRecentsAdapter.h"
#import "CNReputationHandle.h"
#import "CNReputationLogger.h"

@interface CNReputationFutureBuilder : NSObject

@property (readonly, nonatomic) CNReputationContactsAdapter *contactsAdapter; // ivar: _contactsAdapter
@property (readonly, nonatomic) CNReputationCoreRecentsAdapter *coreRecentsAdapter; // ivar: _coreRecentsAdapter
@property (readonly, copy, nonatomic) CNReputationHandle *handle; // ivar: _handle
@property (readonly, nonatomic) CNReputationLogger *logger; // ivar: _logger
@property (retain, nonatomic) CNFuture *scoreFuture; // ivar: _scoreFuture


-(id)build;
-(id)contactsTrustForEmailAddress:(id)arg0 ;
-(id)contactsTrustForPhoneNumber:(id)arg0 ;
-(id)coreRecentsTrustForHandle:(id)arg0 ;
-(id)initWithHandle:(id)arg0 coreRecentsAdapter:(id)arg1 contactsAdapter:(id)arg2 logger:(id)arg3 ;
-(void)addContactsTrustForEmailAddress;
-(void)addContactsTrustForPhoneNumber;
-(void)addCoreRecentsTrust;


@end


#endif