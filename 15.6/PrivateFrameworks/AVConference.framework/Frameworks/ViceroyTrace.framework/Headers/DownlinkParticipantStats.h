// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOWNLINKPARTICIPANTSTATS_H
#define DOWNLINKPARTICIPANTSTATS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface DownlinkParticipantStats : NSObject

@property (readonly) NSDictionary *streamGroupStats; // ivar: _streamGroupStats


-(id)init;
-(id)statsForStreamGroup:(id)arg0 ;
-(void)dealloc;


@end


#endif