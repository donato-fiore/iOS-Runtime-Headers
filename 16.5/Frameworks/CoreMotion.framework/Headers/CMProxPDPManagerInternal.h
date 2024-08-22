// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMPROXPDPMANAGERINTERNAL_H
#define CMPROXPDPMANAGERINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMProxPDPManagerInternal : NSObject {
    *void fLocationdConnection;
    id *fPDPHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    BOOL fStartedUpdates;
}




-(id)init;
-(void)_startPDPUpdatesWithHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif