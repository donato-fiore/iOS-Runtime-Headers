// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMACTIONPERFORMER_H
#define PXCMMACTIONPERFORMER_H

@class NSProgress;
@protocol PXCMMActionPerformerDelegate;


#import "PXActionPerformer.h"
#import "PXCMMSession.h"

@interface PXCMMActionPerformer : PXActionPerformer

@property (weak, nonatomic) NSObject<PXCMMActionPerformerDelegate> *delegate;
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) PXCMMSession *session; // ivar: _session


-(BOOL)canPerformActionWithSession:(id)arg0 ;
-(id)createActionProgress;
-(id)performActionWithSession:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif