// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKVIDEOLISTING_H
#define NTKVIDEOLISTING_H

@class CLKDevice, CLKVideo, UIImage, NSString, UIColor;
@protocol NSCopying, NTKAVListing;

#import <Foundation/Foundation.h>


@interface NTKVideoListing : NSObject <NSCopying, NTKAVListing>

 {
    CLKDevice *_device;
    CLKVideo *_video;
    UIImage *_image;
    NSString *_name;
    NSString *_videoName;
    NSString *_transitionImageName;
    NSUInteger _tags;
}


@property (readonly, nonatomic) NSInteger clip; // ivar: _clip
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIColor *overlayColor; // ivar: _overlayColor
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger theme; // ivar: _theme
@property (readonly, nonatomic) NSInteger variant; // ivar: _variant
@property (readonly, nonatomic) CLKVideo *video;


-(BOOL)hasTag:(NSUInteger)arg0 ;
-(BOOL)snapshotDiffers:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForDevice:(id)arg0 withName:(id)arg1 videoName:(id)arg2 transitionImageName:(id)arg3 overlayColor:(id)arg4 theme:(NSUInteger)arg5 variant:(NSInteger)arg6 clip:(NSInteger)arg7 tags:(NSUInteger)arg8 ;
-(void)_setHasAssets;
-(void)discardAssets;


@end


#endif