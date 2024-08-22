// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOSEXTRASZOOMINGIMAGETRANSITIONCONTEXT_H
#define VIDEOSEXTRASZOOMINGIMAGETRANSITIONCONTEXT_H


#import <Foundation/Foundation.h>

#import "VideosExtrasBorderedImageView.h"

@interface VideosExtrasZoomingImageTransitionContext : NSObject

@property (nonatomic) NSUInteger appearState; // ivar: _appearState
@property (nonatomic, getter=isInteractive) BOOL interactive; // ivar: _interactive
@property (nonatomic) NSUInteger itemIndex; // ivar: _itemIndex
@property (retain, nonatomic) VideosExtrasBorderedImageView *zoomingImageView; // ivar: _zoomingImageView


-(id)initWithZoomingImageView:(id)arg0 itemIndex:(NSUInteger)arg1 appearState:(NSUInteger)arg2 isInteractive:(BOOL)arg3 ;


@end


#endif