// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIDOWNTIMEMANAGER_H
#define SEARCHUIDOWNTIMEMANAGER_H

@class BPSSink, NSCache, NSNotificationCenter;

#import <Foundation/Foundation.h>


@interface SearchUIDowntimeManager : NSObject

@property (retain) BPSSink *biomeSink; // ivar: _biomeSink
@property (readonly) NSCache *downtimeStatuses; // ivar: _downtimeStatuses
@property (retain, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter


+(BOOL)isChildOrTeenFamilyMember:(id)arg0 ;
+(BOOL)screenTimeIsEnabledForContact:(id)arg0 ;
+(id)familyMemberForContact:(id)arg0 isMe:(BOOL)arg1 ;
+(id)screenTimeUserIDForContact:(id)arg0 ;
+(id)sharedManager;
-(id)addObserverForDowntimeStatuses:(id)arg0 ;
-(id)init;
-(int)statusForSTUserID:(id)arg0 forceRecheck:(BOOL)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)setupSink;
-(void)updateWithChildState:(id)arg0 ;


@end


#endif