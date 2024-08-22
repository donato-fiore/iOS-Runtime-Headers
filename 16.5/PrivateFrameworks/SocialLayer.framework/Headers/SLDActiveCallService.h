// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDACTIVECALLSERVICE_H
#define SLDACTIVECALLSERVICE_H

@class UISSlotMachine, NSString;
@protocol SLDService, SLDActiveCallService;


#import "SLDRemoteRenderingService.h"

@interface SLDActiveCallService : SLDRemoteRenderingService <SLDService, SLDActiveCallService>



@property (retain, nonatomic) UISSlotMachine *activeCallViewSlotMachine; // ivar: _activeCallViewSlotMachine
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)remoteObjectProtocol;
+(id)sharedService;
-(id)_lookupActiveTUConversation;
-(id)slotMachineForViewIdentifier:(id)arg0 ;
-(void)activeCallViewForStyle:(id)arg0 maxWidth:(CGFloat)arg1 layerContextID:(NSUInteger)arg2 reply:(id)arg3 ;


@end


#endif