// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDELEGATIONCONSUMERSERVICE_H
#define ICDELEGATIONCONSUMERSERVICE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICDelegationConsumerService : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_activeSessions;
}




-(id)init;
-(void)performRequest:(id)arg0 withResponseHandler:(id)arg1 ;


@end


#endif