// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
+(void)setupInterface:(id)arg0 ;
-(id)_applicationIdentifierForConnection:(id)arg0 ;
-(id)_attributionsFromIDs:(id)arg0 appID:(id)arg1 ;
-(id)slotMachineForViewIdentifier:(id)arg0 ;
-(void)accessibilityLabelForAttributionIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)collaborationAttributionViewForTitle:(id)arg0 attributionIdentifiers:(id)arg1 style:(id)arg2 placeholderGlyphConfiguration:(id)arg3 maxWidth:(CGFloat)arg4 variant:(NSInteger)arg5 layerContextID:(NSUInteger)arg6 reply:(id)arg7 ;


@end


#endif