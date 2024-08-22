// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCPLACTIONPERFORMER_H
#define PXCPLACTIONPERFORMER_H



#import "PXActionPerformer.h"
#import "PXCPLUIStatus.h"

@interface PXCPLActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXCPLUIStatus *cplUIStatus; // ivar: _cplUIStatus


-(void)performActionWithCPLUIStatus:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif