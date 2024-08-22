// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HEARINGMLHELPERSERVICE_H
#define HEARINGMLHELPERSERVICE_H

@class NSString, NSXPCConnection;
@protocol HearingMLHelperServiceInterfaceProtocol, OS_dispatch_queue, HearingMLHelperServiceDelegate;

#import <Foundation/Foundation.h>


@interface HearingMLHelperService : NSObject <HearingMLHelperServiceInterfaceProtocol>

 {
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HearingMLHelperServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)_serviceProxy;
-(id)init;
-(void)_destroyXPCConnection;
-(void)dealloc;
-(void)trainWithDetectorID:(id)arg0 hallucinatorPath:(id)arg1 pretrainedWeightsPath:(id)arg2 resultHandler:(id)arg3 ;


@end


#endif