// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMHTMLMEDIAELEMENT_H
#define DOMHTMLMEDIAELEMENT_H

@class NSString;


#import "DOMHTMLElement.h"
#import "DOMTimeRanges.h"
#import "DOMMediaError.h"

@interface DOMHTMLMediaElement : DOMHTMLElement

@property BOOL autoplay;
@property (readonly) DOMTimeRanges *buffered;
@property BOOL controls;
@property (copy) NSString *crossOrigin;
@property (readonly, copy) NSString *currentSrc;
@property CGFloat currentTime;
@property BOOL defaultMuted;
@property CGFloat defaultPlaybackRate;
@property (readonly) CGFloat duration;
@property (readonly) BOOL ended;
@property (readonly) DOMMediaError *error;
@property BOOL loop;
@property (copy) NSString *mediaGroup;
@property BOOL muted;
@property (readonly) unsigned short networkState;
@property (readonly) BOOL paused;
@property CGFloat playbackRate;
@property (readonly) DOMTimeRanges *played;
@property (copy) NSString *preload;
@property (readonly) unsigned short readyState;
@property (readonly) DOMTimeRanges *seekable;
@property (readonly) BOOL seeking;
@property (copy) NSString *src;
@property CGFloat volume;
@property BOOL webkitClosedCaptionsVisible;
@property (readonly) BOOL webkitHasClosedCaptions;
@property BOOL webkitPreservesPitch;


-(CGFloat)getStartDate;
-(id)canPlayType:(id)arg0 ;
-(void)fastSeek:(CGFloat)arg0 ;
-(void)load;
-(void)pause;
-(void)play;


@end


#endif