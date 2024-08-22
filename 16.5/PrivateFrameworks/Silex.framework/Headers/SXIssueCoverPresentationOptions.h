// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXISSUECOVERPRESENTATIONOPTIONS_H
#define SXISSUECOVERPRESENTATIONOPTIONS_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface SXIssueCoverPresentationOptions : NSObject

@property (readonly, nonatomic) UIColor *parentBackgroundColor; // ivar: _parentBackgroundColor
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) BOOL videoPlaybackEnabled; // ivar: _videoPlaybackEnabled


-(id)initWithSize:(struct CGSize )arg0 videoPlaybackEnabled:(BOOL)arg1 parentBackgroundColor:(id)arg2 ;


@end


#endif