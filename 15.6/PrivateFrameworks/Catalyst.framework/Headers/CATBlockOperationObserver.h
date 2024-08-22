// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATBLOCKOPERATIONOBSERVER_H
#define CATBLOCKOPERATIONOBSERVER_H

@class NSString;
@protocol CATOperationObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CATBlockOperationObserver : NSObject <CATOperationObserver>

 {
    NSObject<OS_dispatch_queue> *mQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didFinish; // ivar: _didFinish
@property (copy, nonatomic) id *didProgress; // ivar: _didProgress
@property (copy, nonatomic) id *didStart; // ivar: _didStart
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
// -(void)invokeBlock:(id)arg0 operation:(unk)arg1  ;
-(void)operationDidFinish:(id)arg0 ;
-(void)operationDidProgress:(id)arg0 ;
-(void)operationDidStart:(id)arg0 ;


@end


#endif