// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSSTICKER_H
#define MSSTICKER_H

@class CKImageData, NSError, UIImage, NSData, NSString, NSURL;
@protocol MSStickerPrivate;

#import <Foundation/Foundation.h>


@interface MSSticker : NSObject <MSStickerPrivate>



@property (retain, nonatomic) CKImageData *_imageData; // ivar: __imageData
@property (retain, nonatomic) NSError *_stickerError; // ivar: __stickerError
@property (retain, nonatomic) UIImage *_thumbnail; // ivar: __thumbnail
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *imageFileURL; // ivar: _imageFileURL
@property (readonly, copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly) Class superclass;


+(id)MSStickerPreviewCacheKeyForSticker:(id)arg0 ;
+(id)stickerWithContentsOfURL:(id)arg0 localizedDescription:(id)arg1 error:(*id)arg2 ;
-(id)accessibilityLabel;
-(id)initWithContentsOfFileURL:(id)arg0 localizedDescription:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 data:(id)arg1 localizedDescription:(id)arg2 error:(*id)arg3 ;
-(id)initWithContentsOfURL:(id)arg0 localizedDescription:(id)arg1 error:(*id)arg2 ;
-(void)_generateImageData;
-(void)_generateThumbnail;


@end


#endif