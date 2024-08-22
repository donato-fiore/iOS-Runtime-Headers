// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTINUITYCAPTUREMSNEXCEPTIONMONITOR_H
#define CMCONTINUITYCAPTUREMSNEXCEPTIONMONITOR_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMContinuityCaptureMSNExceptionMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_entityExceptions;
}




+(id)sharedMonitor;
+(void)initialize;
-(id)_init;
-(void)decrementExceptionCountForEntity:(NSInteger)arg0 ;
-(void)incrementExceptionCountForEntity:(NSInteger)arg0 ;
-(void)reset;


@end


#endif