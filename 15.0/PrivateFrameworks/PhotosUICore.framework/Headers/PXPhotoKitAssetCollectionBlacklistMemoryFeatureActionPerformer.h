// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITASSETCOLLECTIONBLACKLISTMEMORYFEATUREACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONBLACKLISTMEMORYFEATUREACTIONPERFORMER_H

@class NSString;
@protocol PXSuggestLessPeopleHelperDelegate;


#import "PXPhotoKitAssetCollectionActionPerformer.h"
#import "PXSuggestLessPeopleHelper.h"

@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXSuggestLessPeopleHelperDelegate>



@property (nonatomic) BOOL isBlockingMemoryFeature; // ivar: _isBlockingMemoryFeature
@property (retain, nonatomic) PXSuggestLessPeopleHelper *suggestLessPeopleHelper; // ivar: _suggestLessPeopleHelper
@property (retain, nonatomic) NSString *userResponse; // ivar: _userResponse


+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)_personContextDetailFetchOptionsForLibrary:(id)arg0 ;
+(id)_verifiedPersonsIncludingMergeCandidatesInMemory:(id)arg0 personFetchOptions:(id)arg1 ;
+(id)createActivityWithTitle:(id)arg0 actionType:(id)arg1 actionSystemImageName:(id)arg2 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 presentViewController:(id)arg1 ;
-(NSUInteger)_memoryFeatureTypeFromActionType:(id)arg0 ;
-(id)_cpAnalyticsEventForMemoryFeatureType:(NSUInteger)arg0 ;
-(id)_memoryFeatureFromMemory:(id)arg0 forActionType:(id)arg1 ;
-(void)applyBlacklistFeatureWithActionType:(id)arg0 ;
-(void)confirmBlacklistingUserAction:(id)arg0 viewSpec:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;
-(void)suggestLessPeopleInMemory:(id)arg0 ;


@end


#endif