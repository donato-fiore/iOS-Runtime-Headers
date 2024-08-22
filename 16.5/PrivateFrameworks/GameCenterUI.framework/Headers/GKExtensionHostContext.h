// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKEXTENSIONHOSTCONTEXT_H
#define GKEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol GKExtensionHostProtocol;


#import "GKExtensionRemoteViewController.h"

@interface GKExtensionHostContext : NSExtensionContext <GKExtensionHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) GKExtensionRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) Class superclass;


-(void)messageFromExtension:(id)arg0 ;


@end


#endif