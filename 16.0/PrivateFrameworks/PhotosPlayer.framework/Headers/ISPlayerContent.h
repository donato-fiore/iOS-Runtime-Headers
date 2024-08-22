// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISPLAYERCONTENT_H
#define ISPLAYERCONTENT_H

@class NSNumber, AVPlayerItem;

#import <Foundation/Foundation.h>


@interface ISPlayerContent : NSObject

@property (readonly, nonatomic) *CGImage photo; // ivar: _photo
@property (readonly, nonatomic) int photoEXIFOrientation; // ivar: _photoEXIFOrientation
@property (readonly, nonatomic) BOOL photoHasColorAdjustments; // ivar: _photoHasColorAdjustments
@property (readonly, nonatomic) BOOL photoIsOriginal; // ivar: _photoIsOriginal
@property (readonly, nonatomic) ? photoTime; // ivar: _photoTime
@property (readonly, nonatomic) BOOL supportsVitality; // ivar: _supportsVitality
@property (readonly, nonatomic) NSNumber *variationIdentifier; // ivar: _variationIdentifier
@property (readonly, nonatomic) ? videoDuration; // ivar: _videoDuration
@property (readonly, nonatomic) AVPlayerItem *videoPlayerItem; // ivar: _videoPlayerItem


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPhoto:(struct CGImage *)arg0 photoIsOriginal:(BOOL)arg1 photoEXIFOrientation:(int)arg2 photoTime:(struct ? )arg3 videoDuration:(struct ? )arg4 photoHasColorAdjustments:(BOOL)arg5 videoPlayerItem:(id)arg6 variationIdentifier:(id)arg7 supportsVitality:(BOOL)arg8 ;
-(void)dealloc;


@end


#endif