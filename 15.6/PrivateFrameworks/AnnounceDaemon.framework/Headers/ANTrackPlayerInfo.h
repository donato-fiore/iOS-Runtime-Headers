// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANTRACKPLAYERINFO_H
#define ANTRACKPLAYERINFO_H

@class NSString, AVPlayerItem;

#import <Foundation/Foundation.h>


@interface ANTrackPlayerInfo : NSObject

@property (readonly, nonatomic) NSString *announcementID; // ivar: _announcementID
@property (nonatomic) BOOL completed; // ivar: _completed
@property (retain, nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem
@property (readonly, nonatomic) NSInteger trackType; // ivar: _trackType


-(id)description;
-(id)initWithPlayerItem:(id)arg0 announcementID:(id)arg1 trackType:(NSInteger)arg2 ;


@end


#endif