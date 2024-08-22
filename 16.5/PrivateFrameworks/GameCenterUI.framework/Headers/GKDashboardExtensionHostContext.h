// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKDASHBOARDEXTENSIONHOSTCONTEXT_H
#define GKDASHBOARDEXTENSIONHOSTCONTEXT_H

@class NSString;
@protocol GKGameCenterDashboardHostProtocol;


#import "GKExtensionHostContext.h"

@interface GKDashboardExtensionHostContext : GKExtensionHostContext <GKGameCenterDashboardHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)getMethodsImplementedByChallengeEventHandlerDelegate:(id)arg0 ;
-(void)requestDashboardLogoImageWithHandler:(id)arg0 ;
-(void)requestImagesForLeaderboardSetsWithHandler:(id)arg0 ;
-(void)requestImagesForLeaderboardsInSet:(id)arg0 handler:(id)arg1 ;


@end


#endif