// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICATTACHMENTPREVIEWGENERATOR_H
#define ICATTACHMENTPREVIEWGENERATOR_H

@class NSMutableSet, NSMutableDictionary, NSString, NSMapTable, NSMutableOrderedSet, ICProgressIndicatorTracker;
@protocol ICProgressIndicatorTrackerDelegate, ICAttachmentPreviewGenerating, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICAttachmentPreviewGeneratorOperationQueue.h"

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate, ICAttachmentPreviewGenerating>



@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *asyncGeneratorQueue; // ivar: _asyncGeneratorQueue
@property (retain, nonatomic) NSMutableSet *attachmentIDsPending; // ivar: _attachmentIDsPending
@property (retain, nonatomic) NSMutableDictionary *attachmentIDsProgress; // ivar: _attachmentIDsProgress
@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *costlyGeneratorQueue; // ivar: _costlyGeneratorQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *generatorQueue; // ivar: _generatorQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *lastOperationForAttachmentID; // ivar: _lastOperationForAttachmentID
@property (retain, nonatomic) NSMutableOrderedSet *postProcessingIDsPending; // ivar: _postProcessingIDsPending
@property (retain, nonatomic) ICAttachmentPreviewGeneratorOperationQueue *postProcessingQueue; // ivar: _postProcessingQueue
@property NSUInteger postProcessingRequestIndex; // ivar: _postProcessingRequestIndex
@property NSUInteger previewGenerationState; // ivar: _previewGenerationState
@property (readonly, nonatomic) BOOL previewOperationsIdle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *previewProgressQueue; // ivar: _previewProgressQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *previewQueue; // ivar: _previewQueue
@property (retain, nonatomic) ICProgressIndicatorTracker *progressTracker; // ivar: _progressTracker
@property (nonatomic) uint8_t shouldGenerateAttachmentsWhenReachable; // ivar: _shouldGenerateAttachmentsWhenReachable
@property (readonly) Class superclass;


+(BOOL)imageClassificationEnabled;
+(BOOL)ocrGenerationEnabled;
+(id)sharedGenerator;
+(void)purgeImageClassificationsInContext:(id)arg0 ;
+(void)purgeOCRInContext:(id)arg0 ;
+(void)setImageClassificationTemporarilyDisabled:(BOOL)arg0 ;
-(BOOL)isPreviewGenerationSupported;
-(id)init;
-(id)missingOrOutdatedImageClassificationSummaryAttachmentIDsInContext:(id)arg0 ;
-(id)missingOrOutdatedMetaDataAttachmentIDsInContext:(id)arg0 ;
-(id)missingOrOutdatedOCRSummaryAttachmentIDsInContext:(id)arg0 ;
-(id)progressForObjectID:(id)arg0 ;
-(void)adjustUserTitleIfNecessaryForAttachment:(id)arg0 ;
-(void)attachmentDidLoad:(id)arg0 ;
-(void)attachmentNeedsPostProcessingNotification:(id)arg0 ;
-(void)attachmentNeedsPreviewGenerationNotification:(id)arg0 ;
-(void)attachmentWillBeDeleted:(id)arg0 ;
-(void)beginPostProcessingAfterDelayIfNecessaryWithForceDelay:(BOOL)arg0 ;
-(void)cancelGenerationOfPendingPreviews;
-(void)cancelIfNeededForAttachment:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)disableAutomaticPreviewGeneration;
-(void)enableAutomaticPreviewGeneration;
-(void)generateMissingOrOutdatedAttachmentMetaDataIfNeededInContext:(id)arg0 ;
-(void)generatePendingPreviewForAttachment:(id)arg0 ;
-(void)generatePendingPreviews;
-(void)generatePreviewIfNeededForAttachment:(id)arg0 ;
-(void)generatePreviewIfNeededForAttachmentWithObjectID:(id)arg0 ;
-(void)generatePreviewsIfNeeded;
-(void)managedObjectContextDidSave:(id)arg0 ;
-(void)mediaDidLoad:(id)arg0 ;
-(void)operationComplete:(id)arg0 ;
-(void)postProcessIfNeededForAttachment:(id)arg0 ;
-(void)postProcessPendingPreviews;
-(void)postProcessPreviewForAttachment:(id)arg0 ;
-(void)progressIndicatorTrackerStartAnimation;
-(void)progressIndicatorTrackerStopAnimation;
-(void)reachabilityChanged:(id)arg0 ;
-(void)resume;
-(void)setProgress:(id)arg0 forObjectID:(id)arg1 ;
-(void)suspend;


@end


#endif