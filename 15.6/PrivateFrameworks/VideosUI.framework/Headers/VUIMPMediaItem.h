// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMPMEDIAITEM_H
#define VUIMPMEDIAITEM_H

@class NSString, MPMediaItem;
@protocol VUIMPMediaEntityImageLoadParamsCreating;


#import "VUIMediaItem.h"

@interface VUIMPMediaItem : VUIMediaItem <VUIMPMediaEntityImageLoadParamsCreating>

 {
    NSString *_coverArtImageIdentifier;
    NSString *_previewFrameImageIdentifier;
}


@property (retain, nonatomic) MPMediaItem *mediaItem; // ivar: _mediaItem


-(id)HLSAudioCapability;
-(id)HLSColorCapability;
-(id)HLSResolution;
-(id)_valueForPropertyDescriptor:(id)arg0 ;
-(id)assetController;
-(id)assetType;
-(id)audioCapability;
-(id)colorCapability;
-(id)contentRating;
-(id)coverArtImageIdentifier;
-(id)credits;
-(id)extrasURL;
-(id)imageLoadParamsWithImageType:(NSUInteger)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 identifier:(id)arg1 requestedProperties:(id)arg2 kind:(id)arg3 ;
-(id)initWithMediaLibrary:(id)arg0 mediaItem:(id)arg1 requestedProperties:(id)arg2 ;
-(id)isLocal;
-(id)isPlayable;
-(id)mediaPlayerMediaItem;
-(id)playedState;
-(id)previewFrameImageIdentifier;
-(id)rentalExpirationDate;
-(id)resolution;
-(id)seasonCanonicalID;
-(id)seasonIdentifier;
-(id)showCanonicalID;
-(id)showIdentifier;
-(id)studio;


@end


#endif