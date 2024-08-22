// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMSHOWMESSAGECOMPOSEACTIONPERFORMER_H
#define PXCMMSHOWMESSAGECOMPOSEACTIONPERFORMER_H

@class NSURL;


#import "PXCMMActionPerformer.h"

@interface PXCMMShowMessageComposeActionPerformer : PXCMMActionPerformer

@property (readonly, nonatomic) NSURL *shareURL; // ivar: _shareURL


-(id)performActionWithSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)performMessageComposeActionWithSession:(id)arg0 shareURL:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif