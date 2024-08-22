// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSGRIDTOGGLEASPECTFITACTIONPERFORMER_H
#define PXPHOTOSGRIDTOGGLEASPECTFITACTIONPERFORMER_H



#import "PXPhotosGridActionPerformer.h"

@interface PXPhotosGridToggleAspectFitActionPerformer : PXPhotosGridActionPerformer



+(BOOL)canPerformActionType:(id)arg0 withViewModel:(id)arg1 ;
-(id)activitySystemImageName;
-(id)activityType;
-(id)barButtonItemWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)localizedTitleForUseCase:(NSUInteger)arg0 ;
-(void)performUserInteractionTask;


@end


#endif