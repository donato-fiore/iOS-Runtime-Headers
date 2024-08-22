// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTURNBASEDMATCHMAKEREXTENSIONHOSTCONTEXT_H
#define GKTURNBASEDMATCHMAKEREXTENSIONHOSTCONTEXT_H

@class NSString, GKGame;
@protocol GKTurnBasedMatchmakerHostProtocol;


#import "GKExtensionHostContext.h"

@interface GKTurnBasedMatchmakerExtensionHostContext : GKExtensionHostContext <GKTurnBasedMatchmakerHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GKGame *game;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;


@end


#endif