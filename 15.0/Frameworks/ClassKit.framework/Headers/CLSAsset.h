// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSASSET_H
#define CLSASSET_H

@class NSURL, NSMutableArray, NSError, NSMetadataQuery, NSProgress, NSString, NSSet, NSOperationQueue;
@protocol CLSRelationable, NSFilePresenter;


#import "CLSObject.h"

@interface CLSAsset : CLSObject <CLSRelationable, NSFilePresenter>

 {
    NSURL *_url;
    BOOL _uploaded;
    NSUInteger _uploadState;
    BOOL _observingUploadProgress;
    NSMutableArray *_uploadObservers;
    NSInteger _totalUnitCount;
    NSInteger _completedUnitCount;
    NSError *_sharingError;
    NSMetadataQuery *_query;
    id *_uploadProgressSubscriber;
    NSProgress *_uploadProgress;
    BOOL _addedToFilePresenter;
    BOOL _setupCKShare;
    NSInteger _schoolworkSyncStatus;
}


@property (retain, nonatomic) NSString *brItemID; // ivar: _brItemID
@property (retain, nonatomic) NSString *brOwnerName; // ivar: _brOwnerName
@property (retain, nonatomic) NSString *brShareName; // ivar: _brShareName
@property (retain, nonatomic) NSString *brZoneName; // ivar: _brZoneName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *devModeURL; // ivar: _devModeURL
@property (readonly, nonatomic) NSInteger fileSize;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *filenameExtension;
@property (readonly, nonatomic) CGFloat fractionUploaded; // ivar: _fractionUploaded
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (nonatomic, getter=isOriginal) BOOL original; // ivar: _original
@property (retain, nonatomic) NSString *ownerPersonID; // ivar: _ownerPersonID
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (retain, nonatomic) NSString *relativePathWithinContainer; // ivar: _relativePathWithinContainer
@property (nonatomic) NSInteger schoolworkSyncStatus;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *ubiquitousContainerName; // ivar: _ubiquitousContainerName
@property (readonly, nonatomic) NSError *uploadError; // ivar: _uploadError
@property (nonatomic, getter=isUploaded) BOOL uploaded;
@property (retain, nonatomic) NSURL *url;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)deleteFile:(*id)arg0 ;
-(BOOL)devModeOn;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)_initWithFileURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 withOwnerPersonID:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)uploadFileIfNeeded:(*id)arg0 ;
-(id)uploadObservers;
-(void)addToFilePresenter;
-(void)addUploadObserver:(id)arg0 ;
-(void)checkForCKShare:(id)arg0 ;
-(void)createShareIfNeeded:(id)arg0 ;
-(void)createShareIfNeeded_Imp:(id)arg0 ;
-(void)deleteFileWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg0 ;
-(void)queued_notifyUploadCompletion;
-(void)queued_notifyUploadProgress;
-(void)queued_startObservingUploadProgress;
-(void)queued_stopObservingUploadProgress;
-(void)removeFromFilePresenter;
-(void)removeUploadObserver:(id)arg0 ;
-(void)uploadStateChanged:(NSUInteger)arg0 ;
-(void)urlSuitableForOpeningWithCompletion:(id)arg0 ;
-(void)willSaveObject;


@end


#endif