// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKMOVIECLIPPREVIEWARTWORK_H
#define WLKMOVIECLIPPREVIEWARTWORK_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WLKArtworkVariant.h"

@interface WLKMovieClipPreviewArtwork : NSObject

@property (readonly, nonatomic) CGSize artworkSize; // ivar: _artworkSize
@property (readonly, nonatomic) WLKArtworkVariant *artworkVariant;
@property (readonly, copy, nonatomic) NSString *bgColor; // ivar: _bgColor
@property (readonly, nonatomic) BOOL supportsLayeredImage; // ivar: _supportsLayeredImage
@property (readonly, copy, nonatomic) NSString *textColor1; // ivar: _textColor1
@property (readonly, copy, nonatomic) NSString *textColor2; // ivar: _textColor2
@property (readonly, copy, nonatomic) NSString *textColor3; // ivar: _textColor3
@property (readonly, copy, nonatomic) NSString *textColor4; // ivar: _textColor4
@property (readonly, copy, nonatomic) NSString *url; // ivar: _url


-(id)_init;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif