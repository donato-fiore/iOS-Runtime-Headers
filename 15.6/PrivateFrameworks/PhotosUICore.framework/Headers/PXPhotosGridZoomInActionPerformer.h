// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSGRIDZOOMINACTIONPERFORMER_H
#define PXPHOTOSGRIDZOOMINACTIONPERFORMER_H



#import "PXPhotosGridActionPerformer.h"

@interface PXPhotosGridZoomInActionPerformer : PXPhotosGridActionPerformer



+(BOOL)canPerformActionType:(id)arg0 withViewModel:(id)arg1 ;
-(id)activitySystemImageName;
-(id)activityType;
-(id)localizedTitleForUseCase:(NSUInteger)arg0 ;
-(void)performUserInteractionTask;


@end


#endif