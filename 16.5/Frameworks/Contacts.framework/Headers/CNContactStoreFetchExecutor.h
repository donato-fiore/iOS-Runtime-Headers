// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTSTOREFETCHEXECUTOR_H
#define CNCONTACTSTOREFETCHEXECUTOR_H

@class NSString, CNResult;
@protocol CNFetchRequestVisitor;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"

@interface CNContactStoreFetchExecutor : NSObject <CNFetchRequestVisitor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CNResult *result; // ivar: _result
@property (readonly) CNContactStore *store; // ivar: _store
@property (readonly) Class superclass;


-(id)countForFetchRequest:(id)arg0 ;
-(id)executeFetchRequest:(id)arg0 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;
-(void)visitChangeHistoryFetchRequest:(id)arg0 ;
-(void)visitContactFetchRequest:(id)arg0 ;


@end


#endif