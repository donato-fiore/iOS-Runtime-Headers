// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRNOWPLAYINGARTWORKIMAGE_H
#define MRNOWPLAYINGARTWORKIMAGE_H

@class NSData, NSString;


#import "MRNowPlayingArtwork.h"

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork

@property (readonly, copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, copy, nonatomic) NSString *mimeType; // ivar: _mimeType


-(BOOL)hasArtworkData;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyImageData;
-(id)description;
-(id)initWithImageData:(id)arg0 mimeType:(id)arg1 ;
-(unsigned int)type;


@end


#endif