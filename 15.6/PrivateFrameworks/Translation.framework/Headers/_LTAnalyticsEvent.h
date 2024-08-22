// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTANALYTICSEVENT_H
#define _LTANALYTICSEVENT_H

@class NSString, NSMutableDictionary, NSLocale;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LTAnalyticsEvent : NSObject {
    NSString *_eventName;
    CGFloat _startTime;
    CGFloat _endTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_fields;
}


@property (copy, nonatomic) NSLocale *sourceLocale; // ivar: _sourceLocale
@property (copy, nonatomic) NSLocale *targetLocale; // ivar: _targetLocale


+(id)timedEventWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)addFieldsFromDictionary:(id)arg0 ;
-(void)addFieldsFromDictionary:(id)arg0 internalOnly:(BOOL)arg1 ;
-(void)addFieldsWithError:(id)arg0 ;
-(void)markEnd;
-(void)markStart;
-(void)sendLazy;
-(void)timestampWithName:(id)arg0 ;


@end


#endif