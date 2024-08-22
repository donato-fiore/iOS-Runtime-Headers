// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RFARSESSIONOBSERVER_H
#define RFARSESSIONOBSERVER_H

@class NSString;
@protocol ARInternalSessionObserver, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface RFARSessionObserver : NSObject <ARInternalSessionObserver>

 {
    function<void (rf::data_flow::provider::InputData &&)> m_callback;
    BOOL isUsingV1;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundComputeQueue; // ivar: _backgroundComputeQueue
@property (nonatomic) function<void (rf::data_flow::provider::InputData &&)> callback; // ivar: _callback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // ivar: _dispatchGroup
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL pinchLeft; // ivar: _pinchLeft
@property (readonly, nonatomic) BOOL pinchRight; // ivar: _pinchRight
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)processAddedAnchors:(id)arg0 ;
-(void)processRemovedAnchors:(id)arg0 ;
-(void)processUpdatedAnchors:(id)arg0 ;
-(void)session:(id)arg0 didAddAnchors:(id)arg1 ;
-(void)session:(id)arg0 didRemoveAnchors:(id)arg1 ;
-(void)session:(id)arg0 didUpdateAnchors:(id)arg1 ;
-(void)updateSession:(id)arg0 withTime:(CGFloat)arg1 ;


@end


#endif