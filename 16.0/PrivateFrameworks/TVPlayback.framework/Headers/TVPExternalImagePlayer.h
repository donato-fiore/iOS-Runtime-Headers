// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVPEXTERNALIMAGEPLAYER_H
#define TVPEXTERNALIMAGEPLAYER_H

@class UIImage, CADisplayLink, NSMutableArray, NSDate;
@protocol TVPMediaItem;

#import <Foundation/Foundation.h>

#import "TVPExternalImageLoader.h"

@interface TVPExternalImagePlayer : NSObject

@property (retain, nonatomic) UIImage *currentImage; // ivar: _currentImage
@property (nonatomic) CGFloat currentImageTime; // ivar: _currentImageTime
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) ? elapsedTime; // ivar: _elapsedTime
@property (copy, nonatomic) id *elapsedTimeUpdateBlock; // ivar: _elapsedTimeUpdateBlock
@property (retain, nonatomic) NSMutableArray *imageInfosBeingLoaded; // ivar: _imageInfosBeingLoaded
@property (nonatomic) CGFloat imageInterval; // ivar: _imageInterval
@property (retain, nonatomic) TVPExternalImageLoader *imageLoader; // ivar: _imageLoader
@property (copy, nonatomic) id *imageUpdateBlock; // ivar: _imageUpdateBlock
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // ivar: _mediaItem
@property (retain, nonatomic) NSDate *playbackDate; // ivar: _playbackDate
@property (nonatomic) CGFloat previousTimestamp; // ivar: _previousTimestamp
@property (nonatomic) CGFloat rate; // ivar: _rate
@property (retain, nonatomic) NSDate *referenceDate; // ivar: _referenceDate
@property (nonatomic) ? referenceTime; // ivar: _referenceTime


-(CGFloat)_timeAfterRemovingInterstitials:(CGFloat)arg0 ;
-(id)initWithMediaItem:(id)arg0 referenceTime:(struct ? )arg1 forDate:(id)arg2 ;
-(void)_cancelAllImageLoads;
-(void)_cancelStaleImageLoadsForTime:(CGFloat)arg0 ;
-(void)_displayLinkTimerFired:(id)arg0 ;
-(void)_loadImagesIfNecessary;
-(void)_updateImageIntervalWithRate:(CGFloat)arg0 ;
-(void)invalidate;


@end


#endif