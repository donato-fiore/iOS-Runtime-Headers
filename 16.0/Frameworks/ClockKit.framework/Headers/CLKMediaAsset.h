// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKMEDIAASSET_H
#define CLKMEDIAASSET_H

@class UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CLKDevice.h"
#import "CLKVideo.h"

@interface CLKMediaAsset : NSObject <NSCopying>

 {
    CLKDevice *_device;
}


@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) CGFloat stillDisplayTime; // ivar: _stillDisplayTime
@property (readonly, nonatomic) CLKVideo *video; // ivar: _video
@property (readonly, nonatomic) CGFloat videoDuration; // ivar: _videoDuration


+(id)mediaAssetWithImage:(id)arg0 forDevice:(id)arg1 ;
+(id)mediaAssetWithVideo:(id)arg0 image:(id)arg1 forDevice:(id)arg2 ;
+(id)mediaAssetWithVideo:(id)arg0 image:(id)arg1 videoDuration:(CGFloat)arg2 stillDisplayTime:(CGFloat)arg3 forDevice:(id)arg4 ;
+(id)mediaAssetWithVideoAndImageNamed:(id)arg0 forDevice:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithImage:(id)arg0 forDevice:(id)arg1 ;
-(id)initWithVideo:(id)arg0 image:(id)arg1 forDevice:(id)arg2 ;
-(id)initWithVideo:(id)arg0 image:(id)arg1 videoDuration:(CGFloat)arg2 stillDisplayTime:(CGFloat)arg3 forDevice:(id)arg4 ;


@end


#endif