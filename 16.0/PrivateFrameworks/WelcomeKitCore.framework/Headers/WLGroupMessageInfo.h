// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLGROUPMESSAGEINFO_H
#define WLGROUPMESSAGEINFO_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface WLGroupMessageInfo : NSObject

@property (readonly, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) BOOL handleIDsAreComplete; // ivar: _handleIDsAreComplete
@property (readonly, nonatomic) NSString *roomName; // ivar: _roomName
@property (readonly, nonatomic) NSArray *sortedHandleIDs; // ivar: _sortedHandleIDs
@property (readonly, nonatomic) NSString *sourceThreadID; // ivar: _sourceThreadID


+(id)groupMessageInfoWithSourceThreadID:(id)arg0 sortedHandleIDs:(id)arg1 handleIDsAreComplete:(BOOL)arg2 roomName:(id)arg3 groupID:(id)arg4 ;


@end


#endif