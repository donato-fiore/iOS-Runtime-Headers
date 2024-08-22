// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CATOBSERVERMANAGER_H
#define _CATOBSERVERMANAGER_H

@class NSMutableSet, NSString;
@protocol CATOperationObserver, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CATOperation.h"

@interface _CATObserverManager : NSObject <CATOperationObserver>

 {
    NSMutableSet *mObservers;
    int mState;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_source> *mProgressSource;
    CATOperation *mOperation;
    CATOperation *mStrongOperation;
    BOOL mIsObserving;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithOperation:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)notifyObserversOperationDidProgress:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)operationDidFinish:(id)arg0 ;
-(void)operationDidProgress:(id)arg0 ;
-(void)operationDidStart:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif