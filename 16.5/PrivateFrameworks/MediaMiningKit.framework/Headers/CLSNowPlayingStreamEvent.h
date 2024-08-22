// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSNOWPLAYINGSTREAMEVENT_H
#define CLSNOWPLAYINGSTREAMEVENT_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "CLSNowPlayingStreamEventMetadata.h"

@interface CLSNowPlayingStreamEvent : NSObject

@property (readonly, nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (readonly, nonatomic) NSDate *localStartDate; // ivar: _localStartDate
@property (readonly, copy, nonatomic) CLSNowPlayingStreamEventMetadata *metadata; // ivar: _metadata


+(id)playbackStreamEventDateSortDescriptors;
-(id)description;
-(id)initWithDuetKnowledgeEvent:(id)arg0 ;


@end


#endif