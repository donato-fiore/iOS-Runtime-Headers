// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICGALLERYATTACHMENTUTILITIES_H
#define ICGALLERYATTACHMENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICGalleryAttachmentUtilities : NSObject



+(CGFloat)requiredWidthForAttachment:(id)arg0 viewHeight:(CGFloat)arg1 maxWidth:(CGFloat)arg2 ;
+(id)createAndAddSubAttachmentsToGalleryAttachment:(id)arg0 fromDocuments:(id)arg1 imageCache:(id)arg2 context:(id)arg3 ;
+(id)createSubAttachmentFromDocument:(id)arg0 imageCache:(id)arg1 galleryAttachment:(id)arg2 ;
+(id)imageForSubAttachment:(id)arg0 ;
+(id)imageForSubAttachment:(id)arg0 allowCached:(BOOL)arg1 ;
+(id)imageForSubAttachment:(id)arg0 rotateForMacImageGallery:(BOOL)arg1 allowCached:(BOOL)arg2 ;
+(struct CGSize )sizeOfSubAttachment:(id)arg0 forHeight:(CGFloat)arg1 ;
+(struct CGSize )sizeOfViewForAttachment:(id)arg0 textViewContentWidth:(CGFloat)arg1 ;


@end


#endif