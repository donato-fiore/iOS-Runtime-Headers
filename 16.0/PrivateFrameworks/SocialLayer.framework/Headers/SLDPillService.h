// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDPILLSERVICE_H
#define SLDPILLSERVICE_H

@class NSString, UISSlotMachine;
@protocol SLDService, SLDPillService;


#import "SLDRemoteRenderingService.h"

@interface SLDPillService : SLDRemoteRenderingService <SLDService, SLDPillService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISSlotMachine *highlightDisambiguationPillSlotMachine; // ivar: _highlightDisambiguationPillSlotMachine
@property (retain, nonatomic) UISSlotMachine *highlightPillSlotMachine; // ivar: _highlightPillSlotMachine
@property (readonly) Class superclass;


+(id)remoteObjectProtocol;
+(id)sharedService;
-(id)_applicationIdentifierForConnection:(id)arg0 ;
-(id)_attributionsFromIDs:(id)arg0 appID:(id)arg1 ;
-(id)slotMachineForViewIdentifier:(id)arg0 ;
-(void)accessibilityLabelForAttributionIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)accessibilityLabelForAttributionIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)highlightDisambiguationPillForAttributionIdentifier:(id)arg0 style:(id)arg1 maxWidth:(CGFloat)arg2 variant:(NSUInteger)arg3 layerContextID:(NSUInteger)arg4 reply:(id)arg5 ;
-(void)highlightPillForAttributionIdentifiers:(id)arg0 style:(id)arg1 maxWidth:(CGFloat)arg2 variant:(NSUInteger)arg3 layerContextID:(NSUInteger)arg4 reply:(id)arg5 ;


@end


#endif