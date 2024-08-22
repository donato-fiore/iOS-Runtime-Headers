// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCSAVEDRECORDING_H
#define RCSAVEDRECORDING_H

@class NSManagedObject, AVAsset, NSURL, NSDate, NSString, CLLocation, CSSearchableItem;
@protocol RCMutableRecording;



@interface RCSavedRecording : NSManagedObject <RCMutableRecording>

 {
    AVAsset *_avAsset;
    BOOL _pathWasInvalid;
    BOOL _ignoreChangeForEntityRevision;
}


@property (readonly, copy, nonatomic) NSURL *URIRepresentation;
@property (readonly, nonatomic) AVAsset *avAsset;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *customLabel;
@property (copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *deletionDate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL downloading;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) BOOL enhanced;
@property (nonatomic) BOOL favorite;
@property (readonly, nonatomic) BOOL hasPendingChangeAffectingEntityRevision; // ivar: _hasPendingChangeAffectingEntityRevision
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isContentBeingModified;
@property (readonly, nonatomic) BOOL isEncrypted;
@property (nonatomic) CGFloat length;
@property (copy, nonatomic) CLLocation *location;
@property (nonatomic) BOOL manuallyRenamed;
@property (nonatomic) BOOL musicMemo;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL pendingRestore;
@property (nonatomic) BOOL playable;
@property (nonatomic) BOOL recordedOnWatch;
@property (nonatomic) NSInteger recordingID;
@property (nonatomic) NSInteger revisionID; // ivar: revisionID
@property (readonly, copy, nonatomic) CSSearchableItem *searchableItem;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
@property (copy, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL uploaded;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *userFolderUUID;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) BOOL watchOS;


+(id)localizedStringForRecordingLabel:(NSInteger)arg0 ;
+(id)propertiesAffectingEntityRevision;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg0 ;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg0 ;
-(NSInteger)labelPreset;
-(id)_labelAllowingEmptyString:(BOOL)arg0 ;
-(id)copyResourcesForSharingIntoDirectory:(id)arg0 ;
-(id)detailLabel;
-(id)label;
-(id)subjectForActivityType:(id)arg0 ;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)setLabelPreset:(NSInteger)arg0 ;
-(void)willChangeValueForKey:(id)arg0 ;
-(void)willSave;


@end


#endif