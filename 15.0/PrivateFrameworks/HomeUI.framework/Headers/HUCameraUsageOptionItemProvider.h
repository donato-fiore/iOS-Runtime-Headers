// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERAUSAGEOPTIONITEMPROVIDER_H
#define HUCAMERAUSAGEOPTIONITEMPROVIDER_H

@class HFItemProvider, NSSet, NSMutableSet;



@interface HUCameraUsageOptionItemProvider : HFItemProvider

@property (readonly, copy, nonatomic) NSSet *cameraProfiles; // ivar: _cameraProfiles
@property (readonly, nonatomic) NSUInteger displayStyle; // ivar: _displayStyle
@property (readonly, nonatomic) NSMutableSet *items; // ivar: _items
@property (readonly, nonatomic) NSUInteger presenceEventType; // ivar: _presenceEventType


-(id)init;
-(id)initWithPresenceEventType:(NSUInteger)arg0 cameraProfiles:(id)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;


@end


#endif