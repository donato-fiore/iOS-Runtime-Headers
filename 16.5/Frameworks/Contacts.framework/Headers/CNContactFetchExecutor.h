// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTFETCHEXECUTOR_H
#define CNCONTACTFETCHEXECUTOR_H


#import <Foundation/Foundation.h>

#import "CNContactFetchRequest.h"
#import "CNContactStore.h"

@interface CNContactFetchExecutor : NSObject

@property (readonly, copy, nonatomic) CNContactFetchRequest *request; // ivar: _request
@property (readonly, nonatomic) CNContactStore *store; // ivar: _store


+(id)os_log;
-(id)description;
-(id)initWithRequest:(id)arg0 store:(id)arg1 ;
-(id)run:(*id)arg0 ;


@end


#endif