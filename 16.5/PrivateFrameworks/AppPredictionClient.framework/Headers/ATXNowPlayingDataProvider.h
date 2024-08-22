// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOWPLAYINGDATAPROVIDER_H
#define ATXNOWPLAYINGDATAPROVIDER_H


#import <Foundation/Foundation.h>

#import "ATXCoreDuetContextHelper.h"
#import "ATXNowPlayingEvent.h"

@interface ATXNowPlayingDataProvider : NSObject {
    ATXCoreDuetContextHelper *_coreDuetContextHelper;
    ATXNowPlayingEvent *_lastNowPlayingEvent;
}




-(BOOL)isTVExperienceAppNowPlaying;
-(id)currentNowPlayingEvent;
-(id)init;


@end


#endif