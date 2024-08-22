// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDARSESSIONOBSERVER_H
#define MDARSESSIONOBSERVER_H

@class NSString, ARSession;
@protocol ARSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MDARSessionObserver : NSObject <ARSessionDelegate>

 {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    *ARSessionObserver _observer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) ARSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)initWithObserver:(struct ARSessionObserver *)arg0 onQueue:(id)arg1 ;
-(void)session:(id)arg0 didChangeGeoTrackingStatus:(id)arg1 ;
-(void)session:(id)arg0 didUpdateAnchors:(id)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;


@end


#endif