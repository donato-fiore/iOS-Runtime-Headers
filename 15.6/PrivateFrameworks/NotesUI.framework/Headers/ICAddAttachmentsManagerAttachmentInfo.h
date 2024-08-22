// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICADDATTACHMENTSMANAGERATTACHMENTINFO_H
#define ICADDATTACHMENTSMANAGERATTACHMENTINFO_H

@class ICAttachment, NSAttributedString, UIImage, NSData, NSString, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface ICAddAttachmentsManagerAttachmentInfo : NSObject

@property (retain, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (retain, nonatomic) NSAttributedString *attributedContentText; // ivar: _attributedContentText
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isPhoto;
@property (readonly, nonatomic) BOOL isVideo;
@property (retain, nonatomic) NSData *mediaData; // ivar: _mediaData
@property (retain, nonatomic) NSString *mediaFilenameExtension; // ivar: _mediaFilenameExtension
@property (retain, nonatomic) NSURL *mediaURL; // ivar: _mediaURL
@property (retain, nonatomic) NSString *mediaUTI; // ivar: _mediaUTI
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL usesTemporaryFile; // ivar: _usesTemporaryFile


-(NSUInteger)mediaSize;
-(id)attachmentIfExistsForAccount:(id)arg0 ;
-(id)description;
-(id)initWithFileURL:(id)arg0 ;
-(void)deleteTemporaryImageFileIfNecessary;


@end


#endif