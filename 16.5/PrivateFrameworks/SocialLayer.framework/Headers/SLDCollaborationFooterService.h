// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDCOLLABORATIONFOOTERSERVICE_H
#define SLDCOLLABORATIONFOOTERSERVICE_H

@class NSString, UISSlotMachine;
@protocol SLDService, SLDFooterViewService;


#import "SLDRemoteRenderingService.h"

@interface SLDCollaborationFooterService : SLDRemoteRenderingService <SLDService, SLDFooterViewService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UISSlotMachine *footerViewSlotMachine; // ivar: _footerViewSlotMachine
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)nameFromNameComponents:(id)arg0 ;
+(id)remoteObjectProtocol;
+(id)sharedService;
+(void)slotForModel:(id)arg0 maxWidth:(CGFloat)arg1 completion:(id)arg2 ;
+(void)slotForModelNeedingNameAndEmail:(id)arg0 maxWidth:(CGFloat)arg1 completion:(id)arg2 ;
-(id)slotMachineForViewIdentifier:(id)arg0 ;
-(void)footerViewForModel:(id)arg0 style:(id)arg1 maxWidth:(CGFloat)arg2 layerContextID:(NSUInteger)arg3 reply:(id)arg4 ;


@end


#endif