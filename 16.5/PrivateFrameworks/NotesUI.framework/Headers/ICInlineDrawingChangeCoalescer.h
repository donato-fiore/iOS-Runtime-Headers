// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICINLINEDRAWINGCHANGECOALESCER_H
#define ICINLINEDRAWINGCHANGECOALESCER_H

@class ICAttachment, NSManagedObjectContext, PKDrawing, ICSelectorDelayer;

#import <Foundation/Foundation.h>


@interface ICInlineDrawingChangeCoalescer : NSObject

@property (retain, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (retain, nonatomic) NSManagedObjectContext *handwritingRecognitionContext; // ivar: _handwritingRecognitionContext
@property (retain, nonatomic) PKDrawing *latestDrawing; // ivar: _latestDrawing
@property (retain, nonatomic) NSManagedObjectContext *mainContext; // ivar: _mainContext
@property (nonatomic) NSUInteger numberOfChanges; // ivar: _numberOfChanges
@property (retain, nonatomic) ICSelectorDelayer *processChangesSelectorDelayer; // ivar: _processChangesSelectorDelayer
@property (retain, nonatomic) NSManagedObjectContext *workerContext; // ivar: _workerContext


+(id)handwritingSummaryAttachmentsInContext:(id)arg0 ;
+(id)missingOrOutdatedHandwritingSummaryAttachmentIDsInContext:(id)arg0 ;
+(void)generateMissingOrOutdatedHandwritingSummariesInContext:(id)arg0 ;
+(void)purgeHandwritingSummariesInContext:(id)arg0 ;
-(BOOL)hasChanges;
-(id)initWithAttachment:(id)arg0 ;
-(id)retrieveAndClearLatestDrawingToMerge;
-(void)dealloc;
-(void)drawingDataDidChange:(id)arg0 ;
-(void)mergeDrawingChanges;
-(void)mergeDrawingWithDrawing:(id)arg0 ;
-(void)processIndexableContentWithCompletion:(id)arg0 ;
-(void)updateNowIfNecessary;
-(void)updateVersionIfNeededForAttachment:(id)arg0 withDrawing:(id)arg1 ;


@end


#endif