// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOSGRIDTOGGLEEDITFILTERACTIONPERFORMER_H
#define PXPHOTOSGRIDTOGGLEEDITFILTERACTIONPERFORMER_H



#import "PXPhotosGridActionPerformer.h"

@interface PXPhotosGridToggleEditFilterActionPerformer : PXPhotosGridActionPerformer



+(BOOL)canPerformActionType:(id)arg0 withViewModel:(id)arg1 ;
-(id)localizedTitleForUseCase:(NSUInteger)arg0 ;
-(void)performUserInteractionTask;


@end


#endif