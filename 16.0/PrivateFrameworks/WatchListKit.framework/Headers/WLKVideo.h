// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKVIDEO_H
#define WLKVIDEO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WLKVideoAsset.h"
#import "WLKArtworkVariantListing.h"

@interface WLKVideo : NSObject

@property (readonly, copy, nonatomic) NSString *ID; // ivar: _ID
@property (readonly, nonatomic) WLKVideoAsset *asset; // ivar: _asset
@property (readonly, nonatomic) NSUInteger duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, nonatomic) WLKArtworkVariantListing *images; // ivar: _images
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)videosWithDictionaries:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif