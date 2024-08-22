// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVLIVEPLAYERIMAGESOURCE_H
#define PVLIVEPLAYERIMAGESOURCE_H

@class NSString;
@protocol PVLivePlayerSource;

#import <Foundation/Foundation.h>

#import "PVFrameSet.h"

@interface PVLivePlayerImageSource : NSObject <PVLivePlayerSource>

 {
    PVFrameSet *_imageFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)imageBufferForHostTime:(CGFloat)arg0 ;
-(id)initWithPVImageBuffer:(id)arg0 ;
-(id)initWithUImage:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(struct ? )itemTimeForHostTime:(CGFloat)arg0 ;
-(void)pause;
-(void)play;
-(void)seekToTime:(struct ? )arg0 ;
-(void)setMuted:(BOOL)arg0 ;


@end


#endif