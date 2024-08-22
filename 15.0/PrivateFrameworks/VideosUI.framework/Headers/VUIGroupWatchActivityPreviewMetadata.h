// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIGROUPWATCHACTIVITYPREVIEWMETADATA_H
#define VUIGROUPWATCHACTIVITYPREVIEWMETADATA_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface VUIGroupWatchActivityPreviewMetadata : NSObject

@property (readonly, copy, nonatomic) NSURL *fallbackUrl; // ivar: _fallbackUrl
@property (readonly, copy, nonatomic) NSString *imageUrlFormat; // ivar: _imageUrlFormat
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)metadataFromSerializedData:(id)arg0 ;
-(id)initWithMediaItem:(id)arg0 fallbackUrl:(id)arg1 ;
-(id)initWithPlayable:(id)arg0 fallbackUrl:(id)arg1 ;
-(id)initWithTitle:(id)arg0 showTitle:(id)arg1 seasonTitle:(id)arg2 seasonNumber:(id)arg3 episodeNumber:(id)arg4 imageUrlFormat:(id)arg5 fallbackUrl:(id)arg6 isTVShow:(BOOL)arg7 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 imageUrlFormat:(id)arg2 fallbackUrl:(id)arg3 ;
-(id)localizedSubtitleForSeasonNumber:(id)arg0 episodeNumber:(id)arg1 ;
-(id)serializedData;


@end


#endif