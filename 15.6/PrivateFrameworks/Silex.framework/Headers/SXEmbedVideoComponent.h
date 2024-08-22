// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXEMBEDVIDEOCOMPONENT_H
#define SXEMBEDVIDEOCOMPONENT_H

@class NSURL, NSString;


#import "SXComponent.h"

@interface SXEmbedVideoComponent : SXComponent

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) NSString *caption;


+(id)typeString;
-(NSUInteger)traits;


@end


#endif