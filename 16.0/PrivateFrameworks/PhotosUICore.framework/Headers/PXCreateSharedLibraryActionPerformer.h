// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCREATESHAREDLIBRARYACTIONPERFORMER_H
#define PXCREATESHAREDLIBRARYACTIONPERFORMER_H

@class NSString;
@protocol PXAssistantControllerDelegate, PXSharedLibrary;


#import "PXActionPerformer.h"

@interface PXCreateSharedLibraryActionPerformer : PXActionPerformer <PXAssistantControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL sendInvitationInMessages; // ivar: _sendInvitationInMessages
@property (retain, nonatomic) NSObject<PXSharedLibrary> *sharedLibrary; // ivar: _sharedLibrary
@property (readonly) Class superclass;


-(id)init;
-(void)assistantController:(id)arg0 completedWithError:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif