// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMSHOWPHOTOSPICKERACTIONPERFORMER_H
#define PXCMMSHOWPHOTOSPICKERACTIONPERFORMER_H

@protocol PXGridPresentation;


#import "PXCMMActionPerformer.h"

@interface PXCMMShowPhotosPickerActionPerformer : PXCMMActionPerformer

@property (readonly, nonatomic) NSObject<PXGridPresentation> *gridPresentation; // ivar: _gridPresentation


-(id)performActionWithSession:(id)arg0 completionHandler:(id)arg1 ;
-(void)performPhotosPickerActionWithSession:(id)arg0 gridPresentation:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif