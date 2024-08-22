// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKREMOTEITEMFORSENDING_H
#define CKREMOTEITEMFORSENDING_H

@class NSURL, MSMessage, NSData, NSString;
@protocol NSSecureCoding, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CKRemoteItemForSending : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSURL *appendedBundleURL; // ivar: _appendedBundleURL
@property (copy, nonatomic) MSMessage *appendedMessage; // ivar: _appendedMessage
@property (copy, nonatomic) NSData *appendedRichLinkData; // ivar: _appendedRichLinkData
@property (retain, nonatomic) NSURL *appendedRichLinkURL; // ivar: _appendedRichLinkURL
@property (retain, nonatomic) NSURL *appendedVideoURL; // ivar: _appendedVideoURL
@property (retain, nonatomic) NSString *attachmentDescription; // ivar: _attachmentDescription
@property (retain, nonatomic) NSURL *attachmentURL; // ivar: _attachmentURL
@property (nonatomic) *CGImageBlockSet blockSet; // ivar: _blockSet
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *previewCreationSemaphore; // ivar: _previewCreationSemaphore
@property (nonatomic) *__IOSurface previewImage; // ivar: _previewImage
@property (nonatomic) BOOL previewIsFullyRealizedByChatKit; // ivar: _previewIsFullyRealizedByChatKit


+(BOOL)hasAppendedVideo:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)previewQueue;
-(BOOL)isAttachmentTooLarge:(id)arg0 ;
-(id)description;
-(id)initWithAttachmentURL:(id)arg0 description:(id)arg1 blockOnPreviewCreation:(BOOL)arg2 ;
-(id)initWithAttachmentURL:(id)arg0 description:(id)arg1 previewImage:(id)arg2 blockOnPreviewCreation:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMSMessage:(id)arg0 ;
-(id)initWithRichLinkWithURL:(id)arg0 data:(id)arg1 ;
-(id)previewUIImage;
-(void)_setPreviewUIImage:(id)arg0 ;
-(void)beginPreviewCreation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)waitForPreviewGenerationIfNecessary;


@end


#endif