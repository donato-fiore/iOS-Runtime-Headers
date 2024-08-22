// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNANNOUNCEMENTCONFLICT_H
#define MNANNOUNCEMENTCONFLICT_H


#import <Foundation/Foundation.h>

#import "MNAnnouncementPlanEvent.h"

@interface MNAnnouncementConflict : NSObject

@property (nonatomic) BOOL announcementsAreSimilar; // ivar: _announcementsAreSimilar
@property (nonatomic) CGFloat desiredTimeGap; // ivar: _desiredTimeGap
@property (retain, nonatomic) MNAnnouncementPlanEvent *firstEvent; // ivar: _firstEvent
@property (retain, nonatomic) MNAnnouncementPlanEvent *secondEvent; // ivar: _secondEvent
@property (nonatomic) CGFloat timeGap; // ivar: _timeGap


-(id)description;


@end


#endif