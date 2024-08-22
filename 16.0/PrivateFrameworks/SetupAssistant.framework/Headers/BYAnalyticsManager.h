// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BYANALYTICSMANAGER_H
#define BYANALYTICSMANAGER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BYAnalyticsManager : NSObject

@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (retain, nonatomic) NSMutableDictionary *lazyEvents; // ivar: _lazyEvents


-(id)init;
-(void)_gatherDataFromProducers;
-(void)_sendEvent:(id)arg0 payload:(id)arg1 ;
-(void)addEvent:(id)arg0 ;
-(void)addEvent:(id)arg0 withPayload:(id)arg1 persist:(BOOL)arg2 ;
// -(void)addEvent:(id)arg0 withPayloadBlock:(id)arg1 persist:(unk)arg2  ;
-(void)commit;
-(void)commitThenUpload;
-(void)removeEventsUsingBlock:(id)arg0 ;
-(void)removeNonPersistentEvents;
-(void)reset;
-(void)stash:(id)arg0 ;


@end


#endif