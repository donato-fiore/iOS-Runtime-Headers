// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSTORYSCROLLPOSITIONREFERENCE_H
#define _PXSTORYSCROLLPOSITIONREFERENCE_H

@protocol PXStoryTimeline;

#import <Foundation/Foundation.h>


@interface _PXStoryScrollPositionReference : NSObject

@property (readonly, nonatomic) ? scrollPosition; // ivar: _scrollPosition
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *timeline; // ivar: _timeline


-(id)init;
-(id)initWithScrollPosition:(struct ? )arg0 ;


@end


#endif