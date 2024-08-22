// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMSENDBACKACTIONPERFORMER_H
#define PXCMMSENDBACKACTIONPERFORMER_H



#import "PXCMMActionPerformer.h"
#import "PXCMMContext.h"

@interface PXCMMSendBackActionPerformer : PXCMMActionPerformer

@property (retain, nonatomic) PXCMMContext *sendBackContext; // ivar: _sendBackContext


-(id)performSendBackActionWithSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)_completeSendBackActionWithSuccess:(BOOL)arg0 error:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif