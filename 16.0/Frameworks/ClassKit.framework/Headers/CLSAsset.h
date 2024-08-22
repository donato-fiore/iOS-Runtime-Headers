// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSASSET_H
#define CLSASSET_H

@class NSMutableSet, NSString, NSURL, NSError;
@protocol CLSRelationable, CLSAssetUploadProgressNotifiable, CLSAssetUploadObservable;


#import "CLSAbstractAsset.h"

@interface CLSAsset : CLSAbstractAsset <CLSRelationable, CLSAssetUploadProgressNotifiable, CLSAssetUploadObservable>

 {
    BOOL _uploaded;
    BOOL _uploadRequested;
    NSMutableSet *_uploadObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *devModeURL; // ivar: _devModeURL
@property (nonatomic) NSInteger displayOrder;
@property (nonatomic) CGFloat durationInSeconds;
@property (readonly, nonatomic) NSURL *fileURL;
@property (nonatomic) CGFloat fractionUploaded; // ivar: _fractionUploaded
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isStaged) BOOL staged; // ivar: _staged
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *thumbnailURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSError *uploadError; // ivar: _uploadError
@property (nonatomic, getter=isUploaded) BOOL uploaded;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)deleteFile:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)queued_uploadFileIfNeeded:(*id)arg0 ;
-(BOOL)validateObject:(*id)arg0 ;
-(id)URL;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 withOwnerPersonID:(id)arg1 ;
-(id)initWithURL:(id)arg0 ownerPersonID:(id)arg1 type:(NSInteger)arg2 ;
-(id)uploadFileIfNeeded:(*id)arg0 ;
-(id)uploadObservers;
-(void)addUploadObserver:(id)arg0 ;
-(void)checkForCKShare:(id)arg0 ;
-(void)clientRemote_invalidate;
-(void)clientRemote_uploadCompleted:(BOOL)arg0 url:(id)arg1 thumbnailURL:(id)arg2 relativePathWithinContainer:(id)arg3 ubiquitousContainerName:(id)arg4 brItemID:(id)arg5 brOwnerName:(id)arg6 brZoneName:(id)arg7 brShareName:(id)arg8 fractionUploaded:(CGFloat)arg9 isTemporary:(BOOL)arg10 isStaged:(BOOL)arg11 error:(id)arg12 ;
-(void)clientRemote_uploadProgressFraction:(CGFloat)arg0 error:(id)arg1 ;
-(void)createShareIfNeeded:(id)arg0 ;
-(void)createShareIfNeeded_Imp:(id)arg0 ;
-(void)deleteFileWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)queued_notifyUploadCompletion;
-(void)queued_notifyUploadProgress;
-(void)removeUploadObserver:(id)arg0 ;
-(void)urlSuitableForOpeningWithCompletion:(id)arg0 ;
-(void)urlSuitableForStreamingWithCompletion:(id)arg0 ;
-(void)willSaveObject;


@end


#endif