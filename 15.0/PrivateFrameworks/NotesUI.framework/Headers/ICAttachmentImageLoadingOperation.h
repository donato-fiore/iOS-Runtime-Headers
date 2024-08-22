// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICATTACHMENTIMAGELOADINGOPERATION_H
#define ICATTACHMENTIMAGELOADINGOPERATION_H

@class NSOperation, NSManagedObjectID, NSCache, NSString, NSMutableArray, NSURL;



@interface ICAttachmentImageLoadingOperation : NSOperation

@property (retain, nonatomic) NSManagedObjectID *attachmentObjectID; // ivar: _attachmentObjectID
@property (nonatomic) short attachmentType; // ivar: _attachmentType
@property (retain, nonatomic) NSCache *cache; // ivar: _cache
@property (copy, nonatomic) NSString *cacheKey; // ivar: _cacheKey
@property (retain, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (nonatomic) BOOL forceFullSizeImage; // ivar: _forceFullSizeImage
@property (retain, nonatomic) NSURL *mediaURL; // ivar: _mediaURL


-(id)addCompletionHandler:(SEL)arg0 ;
-(id)initWithCache:(id)arg0 attachment:(id)arg1 attachmentType:(short)arg2 forceFullSizeImage:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)main;
// -(void)removeCompletionHandler:(id)arg0 cancelIfNoneLeft:(unk)arg1  ;


@end


#endif