// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYDECLINEINVITATIONACTIONPERFORMER_H
#define PXSHAREDLIBRARYDECLINEINVITATIONACTIONPERFORMER_H

@protocol PXSharedLibrary;


#import "PXActionPerformer.h"

@interface PXSharedLibraryDeclineInvitationActionPerformer : PXActionPerformer

@property (retain, nonatomic) NSObject<PXSharedLibrary> *invitation; // ivar: _invitation


-(id)init;
-(void)performActionWithInvitation:(id)arg0 presentationEnvironment:(id)arg1 completionHandler:(id)arg2 ;
-(void)performUserInteractionTask;


@end


#endif