// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPHOMESHARINGML3DATAPROVIDER_H
#define MPHOMESHARINGML3DATAPROVIDER_H

@class NSMutableDictionary, NSMutableSet, HSHomeSharingLibrary;
@protocol OS_dispatch_queue, MPArtworkDataSource;


#import "MPMediaLibraryDataProviderML3.h"

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3 {
    NSMutableDictionary *_tokenDataForDSIDs;
    NSMutableSet *_loadedContainerPIDs;
    NSMutableDictionary *_blocksForLoadingContainerPIDs;
    NSObject<OS_dispatch_queue> *_containerFillQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id<MPArtworkDataSource> *_artworkDataSource;
}


@property (readonly, nonatomic) unsigned int databaseID;
@property (readonly, nonatomic) HSHomeSharingLibrary *homeSharingLibrary; // ivar: _homeSharingLibrary
@property (readonly, nonatomic) BOOL isSupportedSharingVersion;


+(BOOL)isScanningForLibraries;
+(id)homeSharingGroupID;
+(void)_determineHomeSharingGroupIDWithCompletionHandler:(id)arg0 ;
+(void)beginScanningForLibraries;
+(void)endScanningForLibraries;
-(BOOL)hasGeniusMixes;
-(BOOL)requiresAuthentication;
-(BOOL)writable;
-(id)URLForItemDataRequest:(id)arg0 ;
-(id)_tokenDataForAccountID:(NSUInteger)arg0 ;
-(id)adjustedValueForMPProperty:(id)arg0 ofEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)artworkDataSource;
-(id)errorResolverForItem:(id)arg0 ;
-(id)initWithHomeSharingLibrary:(id)arg0 ;
-(id)itemResultSetForQueryCriteria:(id)arg0 ;
-(id)name;
-(id)protectedContentSupportStorageURL;
-(id)uniqueIdentifier;
-(void)_fetchTokensForAuthorizedDSIDs;
-(void)_fillContainerForQueryCriteria:(id)arg0 completionBlock:(id)arg1 ;
-(void)_homeSharingGroupIDDidChangeNotification:(id)arg0 ;
-(void)_homeSharingLibraryDidBecomeUnavailable:(id)arg0 ;
-(void)_homeSharingLibraryDidUpdateRevisionNumber:(id)arg0 ;
// -(void)connectWithAuthenticationData:(id)arg0 completionBlock:(id)arg1 progressHandler:(unk)arg2  ;
-(void)dealloc;
-(void)disconnect;
-(void)loadQueryCriteria:(id)arg0 countOfCollectionsWithCompletionBlock:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg0 countOfItemsWithCompletionBlock:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg0 hasCollectionsWithCompletionBlock:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg0 hasItemsWithCompletionBlock:(id)arg1 ;
-(void)setRentalPlaybackStartDateForItemID:(NSUInteger)arg0 ;
-(void)setTokenData:(id)arg0 forAuthorizedDSID:(NSUInteger)arg1 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 ofItemWithIdentifier:(NSInteger)arg2 completionBlock:(id)arg3 ;


@end


#endif