// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSRECORD_H
#define ATXNOTIFICATIONSRECORD_H

@class NSDate, NSString, NSNumber, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXNotificationContext.h"

@interface ATXNotificationsRecord : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _finished;
    NSInteger _outcome;
    NSInteger _endingInteraction;
    NSDate *_publicationDate;
    NSString *_categoryID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_message;
    NSNumber *_numSuppActions;
    NSNumber *_timezone;
    NSUInteger _incomingFeed;
    BOOL _hidden;
    NSDate *_activatedTime;
    NSDate *_unlockedTime;
}


@property (retain, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) NSDate *creationTime; // ivar: _creationTime
@property (retain, nonatomic) ATXNotificationContext *ctx; // ivar: _ctx
@property (retain, nonatomic) NSString *notificationId; // ivar: _notificationId
@property (retain, nonatomic) NSMutableArray *stream; // ivar: _stream


+(BOOL)isNotificationMetadataFromLockscreen:(id)arg0 ;
+(id)serializeMetadata:(id)arg0 error:(id)arg1 ;
-(BOOL)addEvent:(id)arg0 ;
-(BOOL)hasDeviceStateChanged:(NSInteger)arg0 ;
-(BOOL)hasGivenEventType:(NSInteger)arg0 ;
-(BOOL)hasOrbed;
-(BOOL)hasTappedCoalesceAndIsTopOfPile;
-(BOOL)isCleared;
-(BOOL)isEngagement;
-(BOOL)isExpired;
-(BOOL)isIgnored;
-(BOOL)isOnLockscreen;
-(NSInteger)determineEndingInteraction;
-(NSInteger)determineOutcome;
-(NSInteger)findNextEventInStreamAndRecordTime:(id)arg0 forType:(NSInteger)arg1 ;
-(NSInteger)getEndingInteraction;
-(NSInteger)getOutcome;
-(id)getSerializedMetadata;
-(id)init;
-(id)initWithATXNotificationsInterface:(id)arg0 notificationID:(id)arg1 timestamp:(id)arg2 motion:(id)arg3 ;
-(id)initWithSerializedMetadata:(id)arg0 notificationID:(id)arg1 timestamp:(id)arg2 ;
-(id)json:(BOOL)arg0 ;
-(id)message;
-(id)messageWithGrade:(id)arg0 userid:(id)arg1 ;
-(id)pbmsg;
-(id)pbmsgWithGrade:(id)arg0 userId:(id)arg1 ;
-(void)start;


@end


#endif