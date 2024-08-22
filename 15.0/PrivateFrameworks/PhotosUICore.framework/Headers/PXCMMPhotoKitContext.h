// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMPHOTOKITCONTEXT_H
#define PXCMMPHOTOKITCONTEXT_H

@class PHMomentShare, PHSuggestion;


#import "PXCMMContext.h"
#import "PXCMMPhotoKitActionManager.h"

@interface PXCMMPhotoKitContext : PXCMMContext {
    PXCMMPhotoKitActionManager *_photoKitActionManager;
}


@property (readonly, nonatomic) PHMomentShare *momentShare; // ivar: _momentShare
@property (retain, nonatomic) PHMomentShare *originatingMomentShare; // ivar: _originatingMomentShare
@property (readonly, nonatomic) PHSuggestion *suggestion; // ivar: _suggestion


-(id)actionManager;
-(id)createSession;
-(id)initWithAssetCollection:(id)arg0 activityType:(NSUInteger)arg1 sourceType:(NSUInteger)arg2 ;
-(id)initWithAssetCollection:(id)arg0 activityType:(NSUInteger)arg1 sourceType:(NSUInteger)arg2 optionalPeopleFetchResult:(id)arg3 ;
-(id)initWithAssets:(id)arg0 activityType:(NSUInteger)arg1 sourceType:(NSUInteger)arg2 ;
-(id)initWithAssetsDataSourceManager:(id)arg0 mediaProvider:(id)arg1 activityType:(NSUInteger)arg2 ;
-(id)initWithFetchResult:(id)arg0 activityType:(NSUInteger)arg1 sourceType:(NSUInteger)arg2 ;
-(id)initWithFetchResult:(id)arg0 activityType:(NSUInteger)arg1 sourceType:(NSUInteger)arg2 optionalPeopleFetchResult:(id)arg3 ;
-(id)initWithFetchResult:(id)arg0 library:(id)arg1 activityType:(NSUInteger)arg2 sourceType:(NSUInteger)arg3 optionalPeopleFetchResult:(id)arg4 ;
-(id)initWithMomentShare:(id)arg0 activityType:(NSUInteger)arg1 sourceType:(NSUInteger)arg2 ;
-(id)initWithSuggestion:(id)arg0 activityType:(NSUInteger)arg1 sourceType:(NSUInteger)arg2 optionalPeopleFetchResult:(id)arg3 ;


@end


#endif