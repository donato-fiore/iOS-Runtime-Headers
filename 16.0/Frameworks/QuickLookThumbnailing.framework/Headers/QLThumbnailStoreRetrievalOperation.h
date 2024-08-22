// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTHUMBNAILSTORERETRIEVALOPERATION_H
#define QLTHUMBNAILSTORERETRIEVALOPERATION_H

@class NSOperation, NSURL, NSError, GSAddition, NSData, NSDictionary;
@protocol OS_os_activity, QLThumbnailGenerationRequest><NSXPCProxyCreating;


#import "QLThumbnailAddition.h"

@interface QLThumbnailStoreRetrievalOperation : NSOperation {
    NSObject<OS_os_activity> *_retrievalActivity;
    NSObject<OS_os_activity> *_generationActivity;
}


@property (readonly) QLThumbnailAddition *addition; // ivar: _addition
@property BOOL allowsThumbnailGeneration; // ivar: _allowsThumbnailGeneration
@property (retain) NSURL *destinationURL; // ivar: _destinationURL
@property (retain) NSURL *documentURL; // ivar: _documentURL
@property (retain) NSError *error; // ivar: _error
@property (nonatomic, getter=isExecuting) BOOL executing; // ivar: _executing
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly) GSAddition *genStoreAddition;
@property BOOL generateThumbnailsAtBackgroundPriority; // ivar: _generateThumbnailsAtBackgroundPriority
@property (readonly) NSData *serializedQuickLookMetadataDictionary;
@property (readonly) NSDictionary *thumbnailImagesDictionary;
@property (retain) NSObject<QLThumbnailGenerationRequest><NSXPCProxyCreating> *thumbnailRequest; // ivar: _thumbnailRequest
@property (readonly) BOOL thumbnailWasAutomaticallyGenerated;
@property (readonly) BOOL thumbnailWasJustAutomaticallyGenerated; // ivar: _thumbnailWasJustAutomaticallyGenerated


+(BOOL)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg0 ;
-(BOOL)_finishIfNeeded;
-(BOOL)isConcurrent;
-(id)description;
-(id)init;
-(id)initWithDocumentAtURL:(id)arg0 ;
-(void)_afterDeterminingWhetherWeCanGenerate:(BOOL)arg0 ;
-(void)_afterThumbnailIsGenerated;
-(void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_generateThumbnail;
-(void)afterThumbnailIsPutInGenstore;
-(void)cancel;
-(void)main;
-(void)start;


@end


#endif