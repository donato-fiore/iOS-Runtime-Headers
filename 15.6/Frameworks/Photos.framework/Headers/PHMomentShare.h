// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHMOMENTSHARE_H
#define PHMOMENTSHARE_H

@class NSDate, NSString, NSData, NSURL;
@protocol PHShare;


#import "PHAssetCollection.h"
#import "PHMomentSharePreview.h"

@interface PHMomentShare : PHAssetCollection <PHShare>

 {
    PHMomentSharePreview *_preview;
}


@property (readonly, nonatomic) NSUInteger assetCount; // ivar: _assetCount
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSUInteger photosCount; // ivar: _photosCount
@property (readonly, nonatomic) PHMomentSharePreview *preview;
@property (readonly, nonatomic) NSData *previewData; // ivar: _previewData
@property (readonly, nonatomic) short publicPermission; // ivar: _publicPermission
@property (readonly, nonatomic) short publishState; // ivar: _publishState
@property (readonly, nonatomic) NSString *scopeIdentifier; // ivar: _scopeIdentifier
@property (readonly, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly, nonatomic) BOOL shouldIgnoreBudgets; // ivar: _shouldIgnoreBudgets
@property (readonly, nonatomic) BOOL shouldNotifyOnUploadCompletion; // ivar: _shouldNotifyOnUploadCompletion
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) unsigned short status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *thumbnailImageData; // ivar: _thumbnailImageData
@property (readonly, nonatomic) unsigned short trashedState; // ivar: _trashedState
@property (readonly, nonatomic) NSUInteger uploadedPhotosCount; // ivar: _uploadedPhotosCount
@property (readonly, nonatomic) NSUInteger uploadedVideosCount; // ivar: _uploadedVideosCount
@property (readonly, nonatomic) NSUInteger videosCount; // ivar: _videosCount


+(BOOL)managedObjectSupportsShareExpiredState;
+(BOOL)managedObjectSupportsShareTrashedState;
+(BOOL)managedObjectSupportsTrashedState;
+(id)_fetchLocalMomentShareWithUUID:(id)arg0 error:(*id)arg1 ;
+(id)entityKeyMap;
+(id)fetchLocalMomentShareFromShareURL:(id)arg0 error:(*id)arg1 ;
+(id)fetchMomentSharesOverlappingAssetCollection:(id)arg0 options:(id)arg1 ;
+(id)fetchType;
+(id)identifierCode;
+(id)invitedMomentSharesExpiringInDays:(NSUInteger)arg0 ;
+(id)localIdentifierWithUUID:(id)arg0 ;
+(id)managedEntityName;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
+(void)fetchMomentShareFromShareURL:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)shouldPromptUserToIgnoreBudgets;
-(BOOL)shouldSuggestShareBack;
-(Class)changeRequestClass;
-(NSUInteger)estimatedAssetCount;
-(NSUInteger)estimatedPhotosCount;
-(NSUInteger)estimatedVideosCount;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(void)acceptMomentShareWithCompletion:(id)arg0 ;
-(void)forceSyncMomentShareWithCompletion:(id)arg0 ;
-(void)publishMomentShareWithCompletionHandler:(id)arg0 ;


@end


#endif