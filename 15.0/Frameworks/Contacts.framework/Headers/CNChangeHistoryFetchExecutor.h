// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCHANGEHISTORYFETCHEXECUTOR_H
#define CNCHANGEHISTORYFETCHEXECUTOR_H


#import <Foundation/Foundation.h>

#import "CNChangeHistoryFetchRequest.h"
#import "CNContactStore.h"

@interface CNChangeHistoryFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request; // ivar: _request
@property (readonly, nonatomic) CNContactStore *store; // ivar: _store


+(id)os_log;
-(BOOL)validateFetchRequest;
-(id)contactLinkingEventsForContacts:(id)arg0 withFactory:(id)arg1 ;
-(id)countOfDeltaSync;
-(id)deltaSync;
-(id)description;
-(id)fetchCount:(*id)arg0 ;
-(id)fetchEvents:(*id)arg0 ;
-(id)fullSync;
-(id)initWithRequest:(id)arg0 store:(id)arg1 ;
-(id)keysToFetch;
-(id)run:(*id)arg0 ;


@end


#endif