// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOWPLAYINGEVENT_H
#define ATXNOWPLAYINGEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXNowPlayingEvent : NSObject

@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSInteger nowPlayingState; // ivar: _nowPlayingState


-(BOOL)isTVExperienceAppNowPlaying;
-(id)initWithContextInfo:(id)arg0 ;


@end


#endif