// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMPMEDIACOLLECTION_H
#define VUIMPMEDIACOLLECTION_H

@class NSString, MPMediaItemCollection;
@protocol VUIMPMediaEntityImageLoadParamsCreating;


#import "VUIMediaCollection.h"

@interface VUIMPMediaCollection : VUIMediaCollection <VUIMPMediaEntityImageLoadParamsCreating>

 {
    NSString *_coverArtImageIdentifier;
}


@property (retain, nonatomic) MPMediaItemCollection *mediaItemCollection; // ivar: _mediaItemCollection


-(id)HLSAudioCapability;
-(id)HLSColorCapability;
-(id)HLSResolution;
-(id)_valueForPropertyDescriptor:(id)arg0 ;
-(id)assetController;
-(id)audioCapability;
-(id)colorCapability;
-(id)contentRating;
-(id)coverArtImageIdentifier;
-(id)imageLoadParamsWithImageType:(NSUInteger)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 identifier:(id)arg1 requestedProperties:(id)arg2 kind:(id)arg3 ;
-(id)initWithMediaLibrary:(id)arg0 mediaItemCollection:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)isLocal;
-(id)playedState;
-(id)resolution;
-(id)showIdentifier;


@end


#endif