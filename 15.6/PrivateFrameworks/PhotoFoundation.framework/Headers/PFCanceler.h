// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCANCELER_H
#define PFCANCELER_H

@class PFAsyncDispatchMulticaster<PFCancelerObserverMulticaster>, NSString;
@protocol PFCanceler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PFCanceler : NSObject <PFCanceler>

 {
    NSObject<OS_dispatch_queue> *_serializer;
    BOOL _isCanceled;
    PFAsyncDispatchMulticaster<PFCancelerObserverMulticaster> *_multicaster;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsNotifyOnCancel;
-(BOOL)isCanceled;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)cancel;
-(void)removeObserver:(id)arg0 ;


@end


#endif