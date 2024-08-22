// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRMOCKNSXPCLISTENER_H
#define NRMOCKNSXPCLISTENER_H

@class NSString;
@protocol NRNSXPCListenerProtocol, OS_dispatch_queue, NRNSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface NRMockNSXPCListener : NSObject <NRNSXPCListenerProtocol>

 {
    BOOL _suspended;
    BOOL _invalidated;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<NRNSXPCListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMachServiceName:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)suspend;


@end


#endif