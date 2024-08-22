// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNBLOCKOBSERVER_H
#define _CNBLOCKOBSERVER_H

@class NSString;
@protocol CNObserver;

#import <Foundation/Foundation.h>

#import "CNObservableContractEnforcement.h"

@interface _CNBlockObserver : NSObject <CNObserver>

 {
    id *_resultBlock;
    id *_completionBlock;
    id *_failureBlock;
    CNObservableContractEnforcement *_enforcement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(id)initWithResultBlock:(id)arg0 completionBlock:(unk)arg1 failureBlock:(id)arg2  ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif