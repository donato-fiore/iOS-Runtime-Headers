// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKMOVIECLIP_H
#define WLKMOVIECLIP_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "WLKMovieClipAsset.h"
#import "WLKMovieClipPreviewArtwork.h"

@interface WLKMovieClip : NSObject

@property (readonly, copy, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, copy, nonatomic) NSString *hlsUrl; // ivar: _hlsUrl
@property (readonly, nonatomic) WLKMovieClipAsset *preferredAsset;
@property (readonly, nonatomic) WLKMovieClipPreviewArtwork *previewArtwork; // ivar: _previewArtwork
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)movieClipsWithArray:(id)arg0 ;
-(id)_init;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)preferredURL;


@end


#endif