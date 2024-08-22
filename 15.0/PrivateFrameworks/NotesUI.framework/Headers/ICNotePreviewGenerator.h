// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICNOTEPREVIEWGENERATOR_H
#define ICNOTEPREVIEWGENERATOR_H

@class NSOperationQueue, NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface ICNotePreviewGenerator : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended
@property (retain, nonatomic) NSManagedObjectContext *workerContext; // ivar: _workerContext


+(id)sharedGenerator;
-(id)drawingAttachmentAtStartOfNote:(id)arg0 ;
-(id)init;
-(id)previewImageForNote:(id)arg0 minSize:(struct CGSize )arg1 scale:(CGFloat)arg2 appearanceInfo:(id)arg3 ;
-(id)previewURLForNote:(id)arg0 ;
-(id)renderPreviewImageForNote:(id)arg0 minSize:(struct CGSize )arg1 scale:(CGFloat)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 ;
-(void)fetchPreviewImageForNote:(id)arg0 minSize:(struct CGSize )arg1 scale:(CGFloat)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 completionBlock:(id)arg6 ;
-(void)fetchPreviewImageForNote:(id)arg0 minSize:(struct CGSize )arg1 scale:(CGFloat)arg2 cache:(id)arg3 cacheKey:(id)arg4 completionBlock:(id)arg5 ;
-(void)fetchPreviewImageForNote:(id)arg0 minSize:(struct CGSize )arg1 scale:(CGFloat)arg2 completionBlock:(id)arg3 ;
-(void)previewImageWithDrawingAttachment:(id)arg0 minSize:(struct CGSize )arg1 scale:(CGFloat)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 completionBlock:(id)arg6 ;


@end


#endif