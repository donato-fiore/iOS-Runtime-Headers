// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASVIDEOTIMELINE_H
#define VIDEOSEXTRASVIDEOTIMELINE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VideosExtrasVideoTimeline : NSObject {
    NSArray *_timelineElements;
}


@property (readonly, nonatomic) NSArray *events; // ivar: _events


-(id)description;
-(id)eventForTime:(CGFloat)arg0 ;
-(id)initWithTimelineElements:(id)arg0 ;


@end


#endif