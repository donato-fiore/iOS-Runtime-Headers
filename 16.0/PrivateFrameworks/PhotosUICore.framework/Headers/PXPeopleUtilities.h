// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEUTILITIES_H
#define PXPEOPLEUTILITIES_H


#import <Foundation/Foundation.h>


@interface PXPeopleUtilities : NSObject



+(BOOL)_hasRecentlyHandledBootstrapForPerson:(id)arg0 ;
+(BOOL)_isPhotosProcess;
+(BOOL)isFavoritePerson:(id)arg0 ;
+(BOOL)isGreenTeaAndContactsAccessDenied;
+(BOOL)isPersonHiddenFromPeopleHome:(id)arg0 ;
+(BOOL)shouldShowBootstrapForPerson:(id)arg0 ;
+(BOOL)shouldShowBootstrapForPerson:(id)arg0 context:(id)arg1 ;
+(BOOL)showBootstrapIfNeededWithContext:(id)arg0 fromParentVC:(id)arg1 ;
+(BOOL)showBootstrapIfNeededWithContext:(id)arg0 fromParentVC:(id)arg1 delegate:(id)arg2 ;
+(BOOL)showBootstrapIfNeededWithContext:(id)arg0 fromParentVC:(id)arg1 force:(BOOL)arg2 delegate:(id)arg3 ;
+(BOOL)showBootstrapIfNeededWithContext:(id)arg0 fromParentVC:(id)arg1 force:(BOOL)arg2 flowDelegate:(id)arg3 presentationDelegate:(id)arg4 ;
+(NSInteger)manualOrderForInsertingAtEndOfSectionWithType:(NSInteger)arg0 ;
+(id)_daysDictionary;
+(id)_peopleHomeFetchResultForPersonType:(NSInteger)arg0 ;
+(id)_titleStringForPeople:(id)arg0 singlePersonFallback:(id)arg1 groupFallback:(id)arg2 ;
+(id)_untaggingLog;
+(id)alertControllerForRemovingNumberOfPeople:(NSInteger)arg0 completionBlock:(id)arg1 ;
+(id)alertControllerForResettingPeopleWithCompletion:(id)arg0 ;
+(id)alertControllerForRevertingSuggestLess:(id)arg0 completion:(id)arg1 ;
+(id)alertControllerForUntaggingPerson:(id)arg0 asset:(id)arg1 completion:(id)arg2 ;
+(id)assetCollectionListFetchResultForPerson:(id)arg0 ;
+(id)bootstrapViewControllerForContext:(id)arg0 delegate:(id)arg1 ;
+(id)comparatorByPeopleHomeSortingType:(SEL)arg0 ;
+(id)facesForPerson:(id)arg0 inAssets:(id)arg1 ;
+(id)fetchMeContact;
+(id)finalMergeTargetPersonForPersonWithUUID:(id)arg0 ;
+(id)generateNewFaceTileFromFaceTile:(id)arg0 ;
+(id)identifiersForPeople:(id)arg0 ;
+(id)memoryTitleStringFromPeople:(id)arg0 ;
+(id)peopleResetQueue;
+(id)peopleWithPersonUris:(id)arg0 ;
+(id)personFaceTileByPersonIdForPersons:(id)arg0 ;
+(id)personWithLocalIdentifier:(id)arg0 ;
+(id)personWithLocalIdentifier:(id)arg0 propertySets:(id)arg1 ;
+(id)personWithPersonUri:(id)arg0 ;
+(id)sharedContactStore;
+(id)slideshowTitleStringForPeople:(id)arg0 ;
+(id)sortDescriptorsForManualSort;
+(id)sortedPersons:(id)arg0 byPersonMemoryFeatures:(id)arg1 ;
+(id)suggestLessOptionSelectionViewController:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
+(id)titleStringForPeople:(id)arg0 ;
+(struct CGRect )faceRectForPeopleFaceTile:(id)arg0 ;
+(void)_peopleFaceTilesForFaces:(id)arg0 asset:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
+(void)_setDaysDictionary:(id)arg0 ;
+(void)alertStringsForPersonWithUserFeedbackType:(NSUInteger)arg0 name:(id)arg1 alertTitle:(*id)arg2 alertMessage:(*id)arg3 alternativeLevelActionTitle:(*id)arg4 resetActionTitle:(*id)arg5 ;
+(void)markHandledBootstrapForPerson:(id)arg0 ;
+(void)mergePersons:(id)arg0 withPerson:(id)arg1 ;
+(void)peopleFaceTilesForAsset:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
+(void)peopleFaceTilesForFaces:(id)arg0 asset:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
+(void)unblockPersonsInLibrary:(id)arg0 completion:(id)arg1 ;


@end


#endif