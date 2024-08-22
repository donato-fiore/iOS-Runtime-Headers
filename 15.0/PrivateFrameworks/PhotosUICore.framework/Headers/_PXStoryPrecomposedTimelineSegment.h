// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYPRECOMPOSEDTIMELINESEGMENT_H
#define _PXSTORYPRECOMPOSEDTIMELINESEGMENT_H

@protocol PXStoryClipComposition;

#import <Foundation/Foundation.h>


@interface _PXStoryPrecomposedTimelineSegment : NSObject

@property (retain, nonatomic) NSObject<PXStoryClipComposition> *clipComposition; // ivar: _clipComposition
@property (nonatomic) char transitionKind; // ivar: _transitionKind


-(id)initWithClipComposition:(id)arg0 transitionKind:(char)arg1 ;


@end


#endif