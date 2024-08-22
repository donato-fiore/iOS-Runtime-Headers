// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOKITSUGGESTLESSPERSONACTIONPERFORMER_H
#define PUPHOTOKITSUGGESTLESSPERSONACTIONPERFORMER_H

@class PXSuggestLessPeopleHelper;
@protocol PXSuggestLessPeopleHelperDelegate;


#import "PUPhotoKitActionPerformer.h"

@interface PUPhotoKitSuggestLessPersonActionPerformer : PUPhotoKitActionPerformer <PXSuggestLessPeopleHelperDelegate>

 {
    PXSuggestLessPeopleHelper *_suggestLessPeopleHelper;
}




+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 presentViewController:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif