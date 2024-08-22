// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPVIDEOVIEWCONFIGURATION_H
#define LPVIDEOVIEWCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface LPVideoViewConfiguration : NSObject <NSCopying>



@property (nonatomic) BOOL allowsLoadingMediaWithAutoPlayDisabled; // ivar: _allowsLoadingMediaWithAutoPlayDisabled
@property (nonatomic) BOOL disableAutoPlay; // ivar: _disableAutoPlay
@property (nonatomic) BOOL disablePlayback; // ivar: _disablePlayback
@property (nonatomic) BOOL disablePlaybackControls; // ivar: _disablePlaybackControls
@property (nonatomic) CGFloat fullScreenTransitionCornerRadius; // ivar: _fullScreenTransitionCornerRadius


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif