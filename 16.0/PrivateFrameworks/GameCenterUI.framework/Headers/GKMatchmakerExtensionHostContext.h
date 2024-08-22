// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKMATCHMAKEREXTENSIONHOSTCONTEXT_H
#define GKMATCHMAKEREXTENSIONHOSTCONTEXT_H

@class NSString, GKGame;
@protocol GKMatchmakerHostProtocol;


#import "GKExtensionHostContext.h"

@interface GKMatchmakerExtensionHostContext : GKExtensionHostContext <GKMatchmakerHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GKGame *game;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)shareMatchWithRequest:(id)arg0 handler:(id)arg1 ;


@end


#endif