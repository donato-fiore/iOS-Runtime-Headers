// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYVIEWINVITATIONACTIONPERFORMER_H
#define PXSHAREDLIBRARYVIEWINVITATIONACTIONPERFORMER_H

@class NSString;
@protocol PXAssistantControllerDelegate, PXSharedLibrary;


#import "PXActionPerformer.h"
#import "PXSharedLibraryLegacyDevicesFallbackMonitor.h"

@interface PXSharedLibraryViewInvitationActionPerformer : PXActionPerformer <PXAssistantControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PXSharedLibrary> *invitation; // ivar: _invitation
@property (retain, nonatomic) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor; // ivar: _legacyDevicesFallbackMonitor
@property (readonly) Class superclass;


-(id)init;
-(void)assistantController:(id)arg0 completedWithError:(id)arg1 ;
-(void)performActionWithInvitation:(id)arg0 legacyDevicesFallbackMonitor:(id)arg1 presentationEnvironment:(id)arg2 completionHandler:(id)arg3 ;
-(void)performUserInteractionTask;


@end


#endif