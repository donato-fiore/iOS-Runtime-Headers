// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIDECARPROVIDERPROXY_H
#define SIDECARPROVIDERPROXY_H

@protocol SidecarSessionDelegate, SidecarServiceProviderDelegate;

#import <Foundation/Foundation.h>


@interface SidecarProviderProxy : NSObject <SidecarSessionDelegate>



@property (weak, nonatomic) NSObject<SidecarServiceProviderDelegate> *delegate; // ivar: _delegate


+(id)defaultProxy;
-(id)init;
-(void)sidecarServiceTerminate;
-(void)sidecarSession:(id)arg0 closedWithError:(id)arg1 ;
-(void)sidecarSession:(id)arg0 receivedMessage:(id)arg1 ;
-(void)sidecarSessionStarted:(id)arg0 ;


@end


#endif