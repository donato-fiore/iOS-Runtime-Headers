// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMSERVICE_H
#define AXMSERVICE_H

@class NSString, NSXPCConnection;
@protocol AXMServiceClientInterface, AXMServiceInterface, OS_dispatch_queue, AXMServiceDelegate;

#import <Foundation/Foundation.h>


@interface AXMService : NSObject <AXMServiceClientInterface, AXMServiceInterface>

 {
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXMServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)_serviceProxy;
-(id)init;
-(void)_destroyXPCConnection;
-(void)dealloc;
-(void)prewarmVisionEngineService;
-(void)visionEngine:(id)arg0 evaluateSource:(id)arg1 context:(id)arg2 options:(NSInteger)arg3 result:(id)arg4 ;


@end


#endif