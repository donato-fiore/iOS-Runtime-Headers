// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKVIDEOPLAYERLISTING_H
#define NTKVIDEOPLAYERLISTING_H

@class CLKDevice, CLKVideo, NSString, NSURL, NSArray, UIColor;
@protocol NTKAVListing, NSCopying;

#import <Foundation/Foundation.h>


@interface NTKVideoPlayerListing : NSObject <NTKAVListing, NSCopying>

 {
    CLKDevice *_device;
    CLKVideo *_video;
    NSString *_filename;
    NSURL *_url;
}


@property (retain, nonatomic) NSArray *attributes; // ivar: _attributes
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger endBehavior; // ivar: _endBehavior
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CLKVideo *video;


+(id)listingForDevice:(id)arg0 withFilename:(id)arg1 ;
+(id)listingForDevice:(id)arg0 withFilename:(id)arg1 andColor:(id)arg2 ;
+(id)listingForDevice:(id)arg0 withURL:(id)arg1 ;
-(BOOL)snapshotDiffers:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForDevice:(id)arg0 withFilename:(id)arg1 ;
-(id)initForDevice:(id)arg0 withURL:(id)arg1 ;
-(void)discardAssets;


@end


#endif