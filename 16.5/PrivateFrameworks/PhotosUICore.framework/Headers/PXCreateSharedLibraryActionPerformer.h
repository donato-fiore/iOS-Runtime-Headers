// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCREATESHAREDLIBRARYACTIONPERFORMER_H
#define PXCREATESHAREDLIBRARYACTIONPERFORMER_H

@class NSString;
@protocol PXAssistantControllerDelegate;


#import "PXActionPerformer.h"
#import "PXSharedLibraryLegacyDevicesFallbackMonitor.h"

@interface PXCreateSharedLibraryActionPerformer : PXActionPerformer <PXAssistantControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor; // ivar: _legacyDevicesFallbackMonitor
@property (readonly) Class superclass;


-(id)init;
-(void)assistantController:(id)arg0 completedWithError:(id)arg1 ;
-(void)performActionWithLegacyDevicesFallbackMonitor:(id)arg0 presentationEnvironment:(id)arg1 completionHandler:(id)arg2 ;
-(void)performUserInteractionTask;


@end


#endif