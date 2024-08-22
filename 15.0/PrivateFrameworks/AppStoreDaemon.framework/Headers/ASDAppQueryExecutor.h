// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDAPPQUERYEXECUTOR_H
#define ASDAPPQUERYEXECUTOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ASDDispatchQueue.h"
#import "ASDServiceBroker.h"

@interface ASDAppQueryExecutor : NSObject {
    ASDDispatchQueue *_dispatchQueue;
    NSMutableDictionary *_queryPromises;
    ASDServiceBroker *_serviceBroker;
}




+(void)_executeQueryWithPredicate:(id)arg0 onPairedDevice:(id)arg1 usingServiceBroker:(id)arg2 withResultHandler:(id)arg3 ;
-(id)init;
-(id)initWithServiceBroker:(id)arg0 ;
-(void)executeQueryWithPredicate:(id)arg0 onPairedDevice:(id)arg1 withResultHandler:(id)arg2 ;


@end


#endif