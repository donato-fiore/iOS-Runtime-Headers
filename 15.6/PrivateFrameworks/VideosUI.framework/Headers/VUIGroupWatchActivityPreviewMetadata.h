// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIGROUPWATCHACTIVITYPREVIEWMETADATA_H
#define VUIGROUPWATCHACTIVITYPREVIEWMETADATA_H

@class NSURL, TVImageProxy, NSString;

#import <Foundation/Foundation.h>


@interface VUIGroupWatchActivityPreviewMetadata : NSObject

@property (readonly, nonatomic) *CGImage artworkImage; // ivar: _artworkImage
@property (readonly, copy, nonatomic) NSURL *fallbackUrl; // ivar: _fallbackUrl
@property (readonly, copy, nonatomic) TVImageProxy *imageProxy; // ivar: _imageProxy
@property (readonly, copy, nonatomic) NSString *imageUrlFormat; // ivar: _imageUrlFormat
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)metadataFromSerializedData:(id)arg0 ;
-(id)initWithContextData:(id)arg0 ;
-(id)initWithMediaItem:(id)arg0 fallbackUrl:(id)arg1 isSeasonTitleEnabled:(BOOL)arg2 ;
-(id)initWithPlayable:(id)arg0 fallbackUrl:(id)arg1 isSeasonTitleEnabled:(BOOL)arg2 ;
-(id)initWithTitle:(id)arg0 showTitle:(id)arg1 seasonTitle:(id)arg2 seasonNumber:(id)arg3 episodeNumber:(id)arg4 imageUrlFormat:(id)arg5 artworkImage:(struct CGImage *)arg6 fallbackUrl:(id)arg7 isTVShow:(BOOL)arg8 isSeasonTitleEnabled:(BOOL)arg9 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 imageUrlFormat:(id)arg2 artworkImage:(struct CGImage *)arg3 fallbackUrl:(id)arg4 ;
-(id)localizedSubtitleForSeasonNumber:(id)arg0 episodeNumber:(id)arg1 ;
-(id)serializedData;


@end


#endif