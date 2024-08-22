// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMEDIAOBJECTADDTOLIBRARYASSETACTIONPERFORMER_H
#define CKMEDIAOBJECTADDTOLIBRARYASSETACTIONPERFORMER_H



#import "CKMediaObjectAssetActionPerformer.h"

@interface CKMediaObjectAddToLibraryAssetActionPerformer : CKMediaObjectAssetActionPerformer



+(BOOL)canPerformOnImplicitSelection;
+(BOOL)canPerformWithActionManager:(id)arg0 selectionSnapshot:(id)arg1 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(void)performUserInteractionTask;


@end


#endif