// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMGESTUREMANAGERINTERNAL_H
#define CMGESTUREMANAGERINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMGestureManagerInternal : NSObject {
    int fPriority;
    *void fLocationdConnection;
    id *fGestureHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}




-(id)initWithPriority:(int)arg0 ;
-(void)dealloc;
-(void)startGestureUpdatesWithHandlerPrivate:(id)arg0 ;
-(void)stopGestureUpdatesPrivate;


@end


#endif