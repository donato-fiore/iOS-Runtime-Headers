// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSADIAGNOSTICMONITORCLIENT_H
#define OSADIAGNOSTICMONITORCLIENT_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OSADiagnosticMonitorClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_observers;
}




+(id)sharedClient;
-(id)init;
-(id)q_shimWrappingObserver:(id)arg0 creatingIfAbsent:(BOOL)arg1 removingIfPresent:(BOOL)arg2 ;
-(void)addObserver:(id)arg0 forTypes:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif