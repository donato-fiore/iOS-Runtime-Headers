// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAACCESSPUBLISHERPIPELINES_H
#define PAACCESSPUBLISHERPIPELINES_H


#import <Foundation/Foundation.h>


@interface PAAccessPublisherPipelines : NSObject



+(CGFloat)nextStartTimeForEndTime:(CGFloat)arg0 iteration:(CGFloat)arg1 ;
+(id)accessPublisherWithoutHiddenOrMissingApps:(id)arg0 ;
+(id)accessPublisherWithoutHiddenOrMissingApps:(id)arg0 withBundleLookup:(id)arg1 ;
+(id)accessPublisherWithoutOutOfProcessPickerAccesses:(id)arg0 ;
+(id)accessPublisherWithoutUnknownCategoryAccesses:(id)arg0 ;
+(id)accessRecordsFromPublisher:(id)arg0 ;
+(id)accessRecordsFromPublisher:(id)arg0 reversed:(BOOL)arg1 ;
+(id)coalesceAccessRecordsFromPublisher:(id)arg0 withCoalescingWindowDuration:(CGFloat)arg1 reversed:(BOOL)arg2 ;
+(id)completeAccessRecordFromPartialAccessRecord:(id)arg0 nextAccessPublisher:(id)arg1 ;
// +(id)completeAccessRecordFromPartialAccessRecord:(id)arg0 nextStartTime:(id)arg1 accessPublisher:(unk)arg2  ;
// +(id)findBeginningForPartialAccessRecord:(id)arg0 iteration:(CGFloat)arg1 nextStartTime:(id)arg2 endTime:(unk)arg3 accessPublisher:(CGFloat)arg4  ;
+(id)ongoingAccessRecordsFromPublisher:(id)arg0 ;


@end


#endif