// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQREMOTEPRESENTATIONMANAGER_H
#define ICQREMOTEPRESENTATIONMANAGER_H


#import <Foundation/Foundation.h>

#import "ICQRemoteContext.h"

@interface ICQRemotePresentationManager : NSObject

@property (readonly, nonatomic) ICQRemoteContext *remoteContext; // ivar: _remoteContext


-(id)initWithRemoteContext:(id)arg0 ;
-(void)presentHiddenFreshmintFlowWithEndpoint:(id)arg0 ;


@end


#endif