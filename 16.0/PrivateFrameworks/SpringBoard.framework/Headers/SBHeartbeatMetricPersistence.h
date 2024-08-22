// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHEARTBEATMETRICPERSISTENCE_H
#define SBHEARTBEATMETRICPERSISTENCE_H

@class NSCalendar, NSISO8601DateFormatter, NSMutableDictionary, NSDictionary, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SBHeartbeatMetricPersistence : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSCalendar *_queue_calendar;
    NSISO8601DateFormatter *_queue_dateFormatter;
    NSMutableDictionary *_queue_metricsByDatestamp;
    NSObject<OS_dispatch_source> *_queue_persistenceTimer;
}


@property (readonly, copy, nonatomic) NSDictionary *metricsByDatestamp;
@property (readonly, nonatomic) CGFloat persistenceDelay; // ivar: _persistenceDelay
@property (readonly, nonatomic) CGFloat persistenceLeeway; // ivar: _persistenceLeeway
@property (readonly, copy, nonatomic) NSURL *persistenceURL; // ivar: _persistenceURL


+(id)defaultPersistenceURL;
-(BOOL)_queue_writeToPersistenceURL;
-(id)init;
-(id)initWithPersistenceURL:(id)arg0 persistenceDelay:(CGFloat)arg1 persistenceLeeway:(CGFloat)arg2 ;
-(void)_queue_initializeIfNeeded;
-(void)_queue_scheduleWriteIfNeeded;
-(void)migrateDataFromDefaultsIfNeeded:(id)arg0 ;
-(void)trackInteractionWithFeatureNamed:(id)arg0 ;
-(void)trackInteractionWithFeatureNamed:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif