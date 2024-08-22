// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERAUSAGEOPTIONITEM_H
#define HUCAMERAUSAGEOPTIONITEM_H

@class HFItem, NSSet, NSString;



@interface HUCameraUsageOptionItem : HFItem

@property (readonly, copy, nonatomic) NSSet *cameraProfiles; // ivar: _cameraProfiles
@property (readonly, nonatomic) NSUInteger presence; // ivar: _presence
@property (readonly, nonatomic) NSString *privacyDescription;
@property (readonly, nonatomic) NSUInteger sortOrder; // ivar: _sortOrder
@property (nonatomic) BOOL updateInProgress; // ivar: _updateInProgress
@property (readonly, nonatomic) NSUInteger usage; // ivar: _usage


+(NSUInteger)sortOrderForUsage:(NSUInteger)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithPresence:(NSUInteger)arg0 cameraUsage:(NSUInteger)arg1 cameraProfiles:(id)arg2 ;


@end


#endif