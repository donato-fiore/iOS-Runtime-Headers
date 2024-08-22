// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMCLOUDKITSYNCSTATISTICS_H
#define IMCLOUDKITSYNCSTATISTICS_H


#import <Foundation/Foundation.h>


@interface IMCloudKitSyncStatistics : NSObject

@property (readonly, nonatomic) CGFloat percentSynced;
@property (nonatomic) NSUInteger syncedAttachmentCount; // ivar: _syncedAttachmentCount
@property (nonatomic) NSUInteger syncedChatCount; // ivar: _syncedChatCount
@property (nonatomic) NSUInteger syncedMessageCount; // ivar: _syncedMessageCount
@property (nonatomic) NSUInteger syncedRecordCount; // ivar: _syncedRecordCount
@property (nonatomic) NSUInteger totalAttachmentCount; // ivar: _totalAttachmentCount
@property (nonatomic) NSUInteger totalChatCount; // ivar: _totalChatCount
@property (nonatomic) NSUInteger totalMessageCount; // ivar: _totalMessageCount
@property (nonatomic) NSUInteger totalRecordCount; // ivar: _totalRecordCount


+(CGFloat)calculatePercentageOfTotal:(CGFloat)arg0 count:(CGFloat)arg1 ;
+(id)_createSyncStatisticsDictionary:(NSInteger)arg0 messageSyncCount:(NSInteger)arg1 chatCount:(NSInteger)arg2 chatSyncCount:(NSInteger)arg3 attachmentCount:(NSInteger)arg4 attachmentSyncCount:(NSInteger)arg5 ;
+(id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(NSUInteger)arg0 syncType:(NSInteger)arg1 count:(CGFloat)arg2 max:(CGFloat)arg3 ;
+(id)percentStringFromDouble:(CGFloat)arg0 ;
+(id)percentStringFromTotal:(CGFloat)arg0 count:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_statsString:(id)arg0 count:(NSInteger)arg1 total:(NSInteger)arg2 ;
-(id)_syncStatisticsDictionary;
-(id)description;
-(id)initWithStatisticsDictionary:(id)arg0 ;


@end


#endif