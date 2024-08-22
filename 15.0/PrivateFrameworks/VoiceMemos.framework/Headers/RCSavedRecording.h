// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCSAVEDRECORDING_H
#define RCSAVEDRECORDING_H

@class NSManagedObject, AVAsset, NSURL, NSString, NSDate, CLLocation, CSSearchableItem;
@protocol RCMutableRecording, RCFolder;



@interface RCSavedRecording : NSManagedObject <RCMutableRecording>

 {
    AVAsset *_avAsset;
    BOOL _pathWasInvalid;
    BOOL _ignoreChangeForEntityRevision;
}


@property (readonly, copy, nonatomic) NSURL *URIRepresentation;
@property (readonly, nonatomic) AVAsset *avAsset;
@property (copy, nonatomic) NSString *customLabel;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL downloading;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) BOOL enhanced;
@property (copy, nonatomic) NSDate *evictionDate;
@property (nonatomic) BOOL favorite;
@property (readonly, nonatomic) NSObject<RCFolder> *folder;
@property (readonly, nonatomic) BOOL hasPendingChangeAffectingEntityRevision; // ivar: _hasPendingChangeAffectingEntityRevision
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger iTunesPersistentID;
@property (readonly, nonatomic) BOOL isContentBeingModified;
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
@property (nonatomic) BOOL synced;
@property (copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
@property (copy, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL uploaded;
@property (readonly, copy, nonatomic) NSURL *url;
@property (nonatomic) BOOL watchOS;


+(id)localizedStringForRecordingLabel:(NSInteger)arg0 ;
+(id)propertiesAffectingEntityRevision;
+(id)savedRecordingURIForSearchableItemIdentifier:(id)arg0 ;
+(id)searchableItemIdentifierForSavedRecordingURI:(id)arg0 ;
-(NSInteger)labelPreset;
-(id)_labelAllowingEmptyString:(BOOL)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)detailLabel;
-(id)itemForActivityType:(id)arg0 ;
-(id)label;
-(id)subjectForActivityType:(id)arg0 ;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)setLabelPreset:(NSInteger)arg0 ;
-(void)willChangeValueForKey:(id)arg0 ;
-(void)willSave;


@end


#endif