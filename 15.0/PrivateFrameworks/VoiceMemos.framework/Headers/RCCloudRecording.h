// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCCLOUDRECORDING_H
#define RCCLOUDRECORDING_H

@class NSManagedObject, NSURL, NSData, AVAsset, NSString, NSDate, CLLocation, NSNumber;
@protocol RCMutableRecording, _NSFileBackedFuture, RCFolder;



@interface RCCloudRecording : NSManagedObject <RCMutableRecording>



@property (readonly, copy, nonatomic) NSURL *URIRepresentation;
@property (retain, nonatomic) NSData *audioDigest;
@property (retain, nonatomic) NSObject<_NSFileBackedFuture> *audioFuture;
@property (retain, nonatomic) AVAsset *avAsset; // ivar: _avAsset
@property (copy, nonatomic) NSString *customLabel;
@property (copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL downloading;
@property (nonatomic) CGFloat duration;
@property (retain, nonatomic) NSString *encryptedTitle;
@property (nonatomic) BOOL enhanced;
@property (copy, nonatomic) NSDate *evictionDate;
@property (nonatomic) BOOL favorite;
@property (nonatomic) NSUInteger flags;
@property (readonly, nonatomic) NSObject<RCFolder> *folder;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger iTunesPersistentID;
@property (readonly, nonatomic) BOOL isContentBeingModified;
@property (copy, nonatomic) CLLocation *location;
@property (nonatomic) BOOL manuallyRenamed;
@property (nonatomic) BOOL musicMemo;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL pendingRestore;
@property (nonatomic) BOOL playable;
@property (readonly, nonatomic) NSNumber *purgeableAudioFileSize;
@property (nonatomic) BOOL recordedOnWatch;
@property (nonatomic) NSUInteger sharedFlags;
@property (readonly) Class superclass;
@property (nonatomic) BOOL synced;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
@property (copy, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL uploaded;
@property (readonly, copy, nonatomic) NSURL *url;
@property (nonatomic) BOOL watchOS;


+(BOOL)isRecordingPurgeable:(id)arg0 ;
+(BOOL)setPurgeable:(BOOL)arg0 recordingURL:(id)arg1 error:(*id)arg2 ;
+(id)cacheDeletedOnWatchPredicate;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg0 ;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg0 ;
-(BOOL)copyPropertiesFromOriginalRecording:(id)arg0 error:(*id)arg1 ;
-(BOOL)synchronizeWithExistingAudioFuture:(*id)arg0 ;
-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;
-(id)_activityURLCreateIfNecessary:(BOOL)arg0 ;
-(id)_detailLabel;
-(id)_labelAllowingEmptyString:(BOOL)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)itemForActivityType:(id)arg0 ;
-(id)name;
-(id)purgeAudioFileWithModel:(id)arg0 error:(*id)arg1 ;
-(id)searchableItem;
-(id)subjectForActivityType:(id)arg0 ;
-(void)_updateAudioFuture:(id)arg0 ;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)setName:(id)arg0 ;
-(void)synchronizeRecordingMetadata;
-(void)willSave;


@end


#endif