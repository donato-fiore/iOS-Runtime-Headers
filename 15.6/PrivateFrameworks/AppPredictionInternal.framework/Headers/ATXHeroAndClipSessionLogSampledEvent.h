// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHEROANDCLIPSESSIONLOGSAMPLEDEVENT_H
#define ATXHEROANDCLIPSESSIONLOGSAMPLEDEVENT_H

@protocol ATXHeroAndClipSampledEventProtocol;

#import <Foundation/Foundation.h>

#import "ATXAppOrClipLaunch.h"

@interface ATXHeroAndClipSessionLogSampledEvent : NSObject <ATXHeroAndClipSampledEventProtocol>



@property (retain, nonatomic) ATXAppOrClipLaunch *launch; // ivar: _launch


-(BOOL)isClip;
-(id)bundleId;
-(id)init;
-(id)initFromLaunch:(id)arg0 ;
-(id)location;


@end


#endif