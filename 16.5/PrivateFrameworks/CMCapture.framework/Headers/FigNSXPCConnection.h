// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGNSXPCCONNECTION_H
#define FIGNSXPCCONNECTION_H

@class NSXPCConnection;
@protocol OS_dispatch_group;



@interface FigNSXPCConnection : NSXPCConnection {
    NSObject<OS_dispatch_group> *_connectionRunningGroup;
}


@property (readonly, nonatomic) BOOL explicitlyInvalidated; // ivar: _explicitlyInvalidated


-(void)blockUntilInvalidateHandlerHasBeenCalled;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)setInvalidationHandler:(id)arg0 ;


@end


#endif