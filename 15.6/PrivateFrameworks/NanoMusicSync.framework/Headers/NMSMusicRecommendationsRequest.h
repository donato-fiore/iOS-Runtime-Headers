// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMUSICRECOMMENDATIONSREQUEST_H
#define NMSMUSICRECOMMENDATIONSREQUEST_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface NMSMusicRecommendationsRequest : NSObject

@property (retain, nonatomic) NSData *cachedData; // ivar: _cachedData
@property (retain, nonatomic) NSDictionary *unarchivedCombinedResponsesDictionary; // ivar: _unarchivedCombinedResponsesDictionary
@property (nonatomic) BOOL useCachedDataOnly; // ivar: _useCachedDataOnly


+(id)_recentMusicDirectory;
-(id)_heavyRotationCacheURL;
-(id)_starterPackMultiplexCacheURL;
-(id)_starterPackRoomCacheURL;
-(void)_continueToEditorialRequestWithContext:(id)arg0 queue:(id)arg1 responseHandler:(id)arg2 ;
-(void)_continueToForYouRequestWithContext:(id)arg0 queue:(id)arg1 responseHandler:(id)arg2 ;
-(void)_continueToHeavyRotationRequestWithContext:(id)arg0 queue:(id)arg1 responseHandler:(id)arg2 ;
-(void)_continueToLibraryImportWithContext:(id)arg0 queue:(id)arg1 responseHandler:(id)arg2 ;
-(void)_continueToLibraryRecentMusicRecommedationsWithContext:(id)arg0 queue:(id)arg1 responseHandler:(id)arg2 ;
-(void)_continueToLookupWithContext:(id)arg0 queue:(id)arg1 responseHandler:(id)arg2 ;
-(void)_continueToProcessResultsWithContext:(id)arg0 queue:(id)arg1 responseHandler:(id)arg2 ;
-(void)_continueToStarterPackMultiplexRequestWithContext:(id)arg0 queue:(id)arg1 responseHandler:(id)arg2 ;
-(void)_continueToStarterPackRoomRequestWithURL:(id)arg0 context:(id)arg1 queue:(id)arg2 responseHandler:(id)arg3 ;
-(void)_finishWithContext:(id)arg0 queue:(id)arg1 responseHandler:(id)arg2 ;
-(void)_performEditorialBrowseRequestWithCompletion:(id)arg0 ;
-(void)_performForYouRequestWithCompletion:(id)arg0 ;
-(void)_performHeavyRotationRequestWithCompletion:(id)arg0 ;
-(void)_performLibraryImportChangeRequestWithModelObjects:(id)arg0 completion:(id)arg1 ;
-(void)_performLibraryRecentMusicRequestWithCompletion:(id)arg0 ;
-(void)_performLookupRequestWithModelObjects:(id)arg0 completion:(id)arg1 ;
-(void)_performStarterPackMultiplexRequestWithCompletion:(id)arg0 ;
-(void)_performStarterPackRoomRequestWithURL:(id)arg0 completion:(id)arg1 ;
-(void)_writeData:(id)arg0 toURL:(id)arg1 ;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif