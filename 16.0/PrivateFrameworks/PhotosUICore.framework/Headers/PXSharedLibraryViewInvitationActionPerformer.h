// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYVIEWINVITATIONACTIONPERFORMER_H
#define PXSHAREDLIBRARYVIEWINVITATIONACTIONPERFORMER_H

@class NSString;
@protocol PXAssistantControllerDelegate, PXSharedLibrary;


#import "PXActionPerformer.h"

@interface PXSharedLibraryViewInvitationActionPerformer : PXActionPerformer <PXAssistantControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PXSharedLibrary> *invitation; // ivar: _invitation
@property (readonly) Class superclass;


-(id)init;
-(void)assistantController:(id)arg0 completedWithError:(id)arg1 ;
-(void)performActionWithInvitation:(id)arg0 presentationEnvironment:(id)arg1 completionHandler:(id)arg2 ;
-(void)performUserInteractionTask;


@end


#endif