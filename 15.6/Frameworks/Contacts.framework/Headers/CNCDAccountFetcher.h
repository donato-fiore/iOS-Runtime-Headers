// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCDACCOUNTFETCHER_H
#define CNCDACCOUNTFETCHER_H

@class CNCDPersistenceContext, NSPredicate;

#import <Foundation/Foundation.h>


@interface CNCDAccountFetcher : NSObject

@property (readonly, nonatomic) CNCDPersistenceContext *persistenceContext; // ivar: _persistenceContext
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate


+(id)accountsForPredicate:(id)arg0 inPersistenceStack:(id)arg1 error:(*id)arg2 ;
-(id)fetchAccounts:(*id)arg0 ;
-(id)init;
-(id)initWithPredicate:(id)arg0 persistenceContext:(id)arg1 ;


@end


#endif