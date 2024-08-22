// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROBRAILLEDISPLAYMANAGERSTATUS_H
#define SCROBRAILLEDISPLAYMANAGERSTATUS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SCROBrailleDisplayManagerStatus : NSObject

@property (retain, nonatomic) NSData *aggregatedData; // ivar: _aggregatedData
@property (nonatomic) BOOL anyUnreadAnnouncements; // ivar: _anyUnreadAnnouncements
@property (nonatomic) BOOL currentAnnouncementUnread; // ivar: _currentAnnouncementUnread
@property (nonatomic) NSInteger masterStatusCellIndex; // ivar: _masterStatusCellIndex
@property (nonatomic) int virtualAlignment; // ivar: _virtualAlignment




@end


#endif