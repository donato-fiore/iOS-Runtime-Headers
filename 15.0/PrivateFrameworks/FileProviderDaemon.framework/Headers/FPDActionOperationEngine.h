// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDACTIONOPERATIONENGINE_H
#define FPDACTIONOPERATIONENGINE_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDServer.h"

@interface FPDActionOperationEngine : NSObject {
    FPDServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
}




-(id)inFlightOperations;
-(id)init;
-(id)initWithServer:(id)arg0 ;
-(void)dumpStateTo:(id)arg0 ;
-(void)scheduleActionOperationWithInfo:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif