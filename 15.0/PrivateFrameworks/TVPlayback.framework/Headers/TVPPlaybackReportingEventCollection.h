// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPPLAYBACKREPORTINGEVENTCOLLECTION_H
#define TVPPLAYBACKREPORTINGEVENTCOLLECTION_H

@class NSMutableArray, NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface TVPPlaybackReportingEventCollection : NSObject

@property (nonatomic) BOOL complete; // ivar: _complete
@property (retain, nonatomic) NSMutableArray *eventArray; // ivar: _eventArray
@property (nonatomic) BOOL initialFPSRequestsComplete; // ivar: _initialFPSRequestsComplete
@property (nonatomic) BOOL isDownloaded; // ivar: _isDownloaded
@property (nonatomic) BOOL isGroupActivity; // ivar: _isGroupActivity
@property (nonatomic) BOOL isGroupActivityOriginator; // ivar: _isGroupActivityOriginator
@property (retain, nonatomic) NSMutableDictionary *openEvents; // ivar: _openEvents
@property (readonly, nonatomic) NSDictionary *rtcReportingEventDict;
@property (nonatomic) NSInteger videoType; // ivar: _videoType


+(CGFloat)_totalTimeSpentDoingFPSFetchesFromEndEvents:(id)arg0 ;
+(void)initialize;
-(BOOL)containsEventWithName:(id)arg0 ;
-(id)init;
-(void)_addEventWithName:(id)arg0 type:(NSInteger)arg1 identifier:(id)arg2 value:(id)arg3 timestamp:(id)arg4 forceAdd:(BOOL)arg5 isUIInteraction:(BOOL)arg6 ;
-(void)_closeOpenEvents;
-(void)_setError:(id)arg0 inEventDict:(id)arg1 errorCodeKey:(id)arg2 errorDomainKey:(id)arg3 ;
-(void)addEndEventWithName:(id)arg0 ;
-(void)addEndEventWithName:(id)arg0 identifier:(id)arg1 ;
-(void)addEndEventWithName:(id)arg0 identifier:(id)arg1 timestamp:(id)arg2 ;
-(void)addOrReplaceStartEventWithName:(id)arg0 date:(id)arg1 ;
-(void)addSingleShotEventWithName:(id)arg0 value:(id)arg1 ;
-(void)addStartEventWithName:(id)arg0 ;
-(void)addStartEventWithName:(id)arg0 identifier:(id)arg1 ;
-(void)addStartEventWithName:(id)arg0 isUIInteraction:(BOOL)arg1 ;


@end


#endif