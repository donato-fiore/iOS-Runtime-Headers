// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSGRIDTOGGLEMYPHOTOSONLYACTIONPERFORMER_H
#define PXPHOTOSGRIDTOGGLEMYPHOTOSONLYACTIONPERFORMER_H



#import "PXPhotosGridActionPerformer.h"

@interface PXPhotosGridToggleMyPhotosOnlyActionPerformer : PXPhotosGridActionPerformer



+(BOOL)canPerformActionType:(id)arg0 withViewModel:(id)arg1 ;
-(id)activitySystemImageName;
-(id)activityType;
-(id)localizedTitleForUseCase:(NSUInteger)arg0 ;
-(void)performUserInteractionTask;


@end


#endif