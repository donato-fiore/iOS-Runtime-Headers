// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCHANNELMEMBERSHIPCONTROLLER_H
#define FCCHANNELMEMBERSHIPCONTROLLER_H


#import <Foundation/Foundation.h>

#import "FCChannelMembershipRecordSource.h"

@interface FCChannelMembershipController : NSObject

@property (readonly, nonatomic) FCChannelMembershipRecordSource *recordSource; // ivar: _recordSource


-(id)cachedChannelMembershipsForIDs:(id)arg0 ;
-(id)channelMembershipsFromHeldRecords:(id)arg0 ;
-(id)initWithChannelMembershipRecordSource:(id)arg0 ;
-(void)fetchChannelMembershipsForIDs:(id)arg0 maximumCachedAge:(CGFloat)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif