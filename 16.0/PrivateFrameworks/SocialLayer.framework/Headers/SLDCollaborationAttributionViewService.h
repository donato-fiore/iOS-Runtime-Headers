// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDCOLLABORATIONATTRIBUTIONVIEWSERVICE_H
#define SLDCOLLABORATIONATTRIBUTIONVIEWSERVICE_H

@class NSString, UISSlotMachine;
@protocol SLDService, SLDCollaborationAttributionViewService;


#import "SLDRemoteRenderingService.h"

@interface SLDCollaborationAttributionViewService : SLDRemoteRenderingService <SLDService, SLDCollaborationAttributionViewService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISSlotMachine *slotMachine; // ivar: _slotMachine
@property (readonly) Class superclass;


+(id)remoteObjectProtocol;
+(id)sharedService;
-(id)_applicationIdentifierForConnection:(id)arg0 ;
-(id)_attributionsFromIDs:(id)arg0 appID:(id)arg1 ;
-(id)slotMachineForViewIdentifier:(id)arg0 ;
-(void)collaborationAttributionViewForTitle:(id)arg0 attributionIdentifiers:(id)arg1 style:(id)arg2 maxWidth:(CGFloat)arg3 variant:(NSInteger)arg4 layerContextID:(NSUInteger)arg5 reply:(id)arg6 ;


@end


#endif