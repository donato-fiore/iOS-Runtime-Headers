// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKTHROTTLEDACTIVITY_H
#define _DKTHROTTLEDACTIVITY_H

@class NSString;
@protocol _DKSimpleKeyValueStore;

#import <Foundation/Foundation.h>


@interface _DKThrottledActivity : NSObject {
    NSString *_namespace;
    id<_DKSimpleKeyValueStore> *_store;
}


@property (readonly, nonatomic) NSObject<_DKSimpleKeyValueStore> *store;


+(id)standardInstance;
-(id)description;
-(id)initWithStore:(id)arg0 namespace:(id)arg1 ;
-(void)clearHistoryForName:(id)arg0 ;
-(void)performNoMoreOftenInDaysThan:(CGFloat)arg0 name:(id)arg1 activityBlock:(id)arg2 ;
// -(void)performNoMoreOftenInDaysThan:(CGFloat)arg0 name:(id)arg1 activityBlock:(id)arg2 throttleBlock:(unk)arg3  ;
-(void)performNoMoreOftenInHoursThan:(CGFloat)arg0 name:(id)arg1 activityBlock:(id)arg2 ;
// -(void)performNoMoreOftenInHoursThan:(CGFloat)arg0 name:(id)arg1 activityBlock:(id)arg2 throttleBlock:(unk)arg3  ;
-(void)performNoMoreOftenInMinutesThan:(CGFloat)arg0 name:(id)arg1 activityBlock:(id)arg2 ;
// -(void)performNoMoreOftenInMinutesThan:(CGFloat)arg0 name:(id)arg1 activityBlock:(id)arg2 throttleBlock:(unk)arg3  ;
-(void)performNoMoreOftenInSecondsThan:(CGFloat)arg0 name:(id)arg1 activityBlock:(id)arg2 ;
// -(void)performNoMoreOftenInSecondsThan:(CGFloat)arg0 name:(id)arg1 activityBlock:(id)arg2 throttleBlock:(unk)arg3  ;
-(void)performWithDelayInDaysOf:(CGFloat)arg0 name:(id)arg1 queue:(id)arg2 activityBlock:(id)arg3 ;
-(void)performWithDelayInHoursOf:(CGFloat)arg0 name:(id)arg1 queue:(id)arg2 activityBlock:(id)arg3 ;
-(void)performWithDelayInMinutesOf:(CGFloat)arg0 name:(id)arg1 queue:(id)arg2 activityBlock:(id)arg3 ;
-(void)performWithDelayInSecondsOf:(CGFloat)arg0 name:(id)arg1 queue:(id)arg2 activityBlock:(id)arg3 ;
-(void)performWithMinimumIntervalInDaysOf:(CGFloat)arg0 name:(id)arg1 queue:(id)arg2 activityBlock:(id)arg3 ;
-(void)performWithMinimumIntervalInHoursOf:(CGFloat)arg0 name:(id)arg1 queue:(id)arg2 activityBlock:(id)arg3 ;
-(void)performWithMinimumIntervalInMinutesOf:(CGFloat)arg0 name:(id)arg1 queue:(id)arg2 activityBlock:(id)arg3 ;
-(void)performWithMinimumIntervalInSecondsOf:(CGFloat)arg0 name:(id)arg1 queue:(id)arg2 activityBlock:(id)arg3 ;
-(void)setDate:(id)arg0 forName:(id)arg1 ;


@end


#endif