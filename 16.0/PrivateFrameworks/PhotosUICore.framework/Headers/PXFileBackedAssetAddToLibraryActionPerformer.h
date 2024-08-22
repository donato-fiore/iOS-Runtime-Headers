// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFILEBACKEDASSETADDTOLIBRARYACTIONPERFORMER_H
#define PXFILEBACKEDASSETADDTOLIBRARYACTIONPERFORMER_H



#import "PXFileBackedAssetActionPerformer.h"

@interface PXFileBackedAssetAddToLibraryActionPerformer : PXFileBackedAssetActionPerformer



+(BOOL)canPerformOnImplicitSelection;
+(BOOL)canPerformWithSelectionSnapshot:(id)arg0 ;
-(void)_completeSaveWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif