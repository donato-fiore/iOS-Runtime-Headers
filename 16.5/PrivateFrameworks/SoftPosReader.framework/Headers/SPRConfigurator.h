// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRCONFIGURATOR_H
#define SPRCONFIGURATOR_H

@protocol OS_dispatch_queue;


#import "SPRObject.h"

@interface SPRConfigurator : SPRObject {
    NSObject<OS_dispatch_queue> *_relayQueue;
}




-(id)initWithConnector:(id)arg0 ;
-(id)installWithToken:(id)arg0 error:(*id)arg1 ;
-(id)installWithToken:(id)arg0 force:(BOOL)arg1 error:(*id)arg2 ;
-(id)prepare:(*id)arg0 ;
-(id)prepareAndReturnError:(*id)arg0 ;
-(id)prepareWithForce:(BOOL)arg0 error:(*id)arg1 ;
-(id)statusAndReturnError:(*id)arg0 ;
-(id)statusWithToken:(id)arg0 error:(*id)arg1 ;
-(id)statusWithToken:(id)arg0 options:(NSInteger)arg1 error:(*id)arg2 ;
-(void)installAsyncWithToken:(id)arg0 callback:(id)arg1 ;
-(void)installAsyncWithToken:(id)arg0 force:(BOOL)arg1 callback:(id)arg2 ;
-(void)installWithToken:(id)arg0 force:(BOOL)arg1 delegate:(id)arg2 completion:(id)arg3 ;


@end


#endif