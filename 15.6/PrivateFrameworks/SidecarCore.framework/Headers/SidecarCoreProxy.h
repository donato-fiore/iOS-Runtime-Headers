// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIDECARCOREPROXY_H
#define SIDECARCOREPROXY_H

@protocol SidecarCore_Interface, SidecarSessionDelegate, SidecarServicePresenterDelegate;

#import <Foundation/Foundation.h>


@interface SidecarCoreProxy : NSObject <SidecarCore_Interface>



@property (retain, nonatomic) NSObject<SidecarSessionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<SidecarServicePresenterDelegate> *presenterDelegate; // ivar: _presenterDelegate


+(id)defaultProxy;
-(void)relayPresenterServiceExtensionReady:(id)arg0 ;
-(void)relayPresenterStartServiceExtension:(id)arg0 completion:(id)arg1 ;
-(void)relaySession:(NSInteger)arg0 closedWithError:(id)arg1 ;
-(void)relaySession:(NSInteger)arg0 receivedOPACKData:(id)arg1 dataLink:(NSInteger)arg2 ;
-(void)relaySession:(NSInteger)arg0 stream:(id)arg1 status:(NSUInteger)arg2 ;
-(void)relaySession:(id)arg0 openedByDevice:(id)arg1 dataLink:(NSInteger)arg2 service:(id)arg3 ;
-(void)relayTerminateService;


@end


#endif