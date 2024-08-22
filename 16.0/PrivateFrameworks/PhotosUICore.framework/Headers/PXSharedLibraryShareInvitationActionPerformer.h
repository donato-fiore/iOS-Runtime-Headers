// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYSHAREINVITATIONACTIONPERFORMER_H
#define PXSHAREDLIBRARYSHAREINVITATIONACTIONPERFORMER_H

@class NSURL;


#import "PXActionPerformer.h"

@interface PXSharedLibraryShareInvitationActionPerformer : PXActionPerformer {
    NSURL *_invitationURL;
}




-(id)initWithPresentationEnvironment:(id)arg0 ;
-(void)performActionWithInvitationURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif