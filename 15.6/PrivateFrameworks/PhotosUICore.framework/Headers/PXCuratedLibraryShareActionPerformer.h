// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYSHAREACTIONPERFORMER_H
#define PXCURATEDLIBRARYSHAREACTIONPERFORMER_H



#import "PXCuratedLibraryAssetCollectionActionPerformer.h"

@interface PXCuratedLibraryShareActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer



-(BOOL)canPerformWithActivityItems:(id)arg0 forActivity:(id)arg1 ;
-(id)activitySystemImageName;
-(id)activityType;
-(void)performUserInteractionTask;


@end


#endif