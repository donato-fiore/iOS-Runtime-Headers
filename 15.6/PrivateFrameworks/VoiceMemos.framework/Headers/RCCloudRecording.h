// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCCLOUDRECORDING_H
#define RCCLOUDRECORDING_H

@class NSManagedObject, NSURL, NSData, AVAsset, NSDate, NSString, NSNumber, CLLocation;
@protocol RCMutableRecording, _NSFileBackedFuture, RCFolder;



@interface RCCloudRecording : NSManagedObject <RCMutableRecording>

 {
    BOOL _isEncrypted;
    BOOL _isEncryptedIsSet;
}


@property (readonly, copy, nonatomic) NSURL *URIRepresentation;
@property (retain, nonatomic) NSData *audioDigest;
@property (retain, nonatomic) NSObject<_NSFileBackedFuture> *audioFuture;
@property (retain, nonatomic) AVAsset *avAsset; // ivar: _avAsset
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *customLabel;
@property (copy, nonatomic) NSString *customLabelForSorting;
@property (copy, nonatomic) NSString *customLabelForSorting;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *dateForSorting;
@property (retain, nonatomic) NSDate *dateForSorting;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *deletionDate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL downloading;
@property (copy, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSObject<_NSFileBackedFuture> *encryptedAudioFuture;
@property (copy, nonatomic) NSString *encryptedCustomLabel;
@property (retain, nonatomic) NSDate *encryptedDate;
@property (copy, nonatomic) NSNumber *encryptedDuration;
@property (copy, nonatomic) NSDate *encryptedEvictionDate;
@property (copy, nonatomic) NSNumber *encryptedSharedFlags;
@property (copy, nonatomic) NSString *encryptedUniqueID;
@property (nonatomic) BOOL enhanced;
@property (copy, nonatomic) NSDate *evictionDate;
@property (nonatomic) BOOL favorite;
@property (nonatomic) NSUInteger flags;
@property (readonly, nonatomic) NSObject<RCFolder> *folder;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isContentBeingModified;
@property (readonly, nonatomic) BOOL isEncrypted;
@property (nonatomic) CGFloat length;
@property (copy, nonatomic) CLLocation *location;
@property (nonatomic) BOOL manuallyRenamed;
@property (nonatomic) BOOL musicMemo;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL pendingRestore;
@property (nonatomic) BOOL playable;
@property (readonly, nonatomic) NSNumber *purgeableAudioFileSize;
@property (nonatomic) BOOL recordedOnWatch;
@property (copy, nonatomic) NSNumber *sharedFlags;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<_NSFileBackedFuture> *syncedAudioFuture;
@property (copy, nonatomic) NSString *syncedCustomLabel;
@property (copy, nonatomic) NSDate *syncedDate;
@property (nonatomic) CGFloat syncedDuration;
@property (copy, nonatomic) NSDate *syncedEvictionDate;
@property (nonatomic) NSUInteger syncedSharedFlags;
@property (copy, nonatomic) NSString *syncedUniqueID;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
@property (copy, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL uploaded;
@property (readonly, copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) BOOL watchOS;


+(BOOL)isRecordingPurgeable:(id)arg0 ;
+(BOOL)setPurgeable:(BOOL)arg0 recordingURL:(id)arg1 error:(*id)arg2 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg0 ;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg0 ;
-(BOOL)synchronizeWithExistingAudioFuture:(*id)arg0 ;
-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;
-(id)_activityURLCreateIfNecessary:(BOOL)arg0 ;
-(id)_detailLabel;
-(id)_labelAllowingEmptyString:(BOOL)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithContext:(id)arg0 useEncryptedStore:(BOOL)arg1 ;
-(id)itemForActivityType:(id)arg0 ;
-(id)name;
-(id)purgeAudioFileWithModel:(id)arg0 error:(*id)arg1 ;
-(id)searchableItem;
-(id)subjectForActivityType:(id)arg0 ;
-(void)_updateAudioFuture:(id)arg0 ;
-(void)awakeFromFetch;
-(void)copySharedFlagsFromOriginalRecording:(id)arg0 ;
-(void)migratePropertiesForSorting;
-(void)setName:(id)arg0 ;
-(void)synchronizeRecordingMetadata;
-(void)willSave;


@end


#endif