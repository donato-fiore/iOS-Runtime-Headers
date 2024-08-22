// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCOREANALYTICSEVENT_H
#define PLCOREANALYTICSEVENT_H

@class NSString, NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface PLCoreAnalyticsEvent : NSObject {
    NSString *_event;
    NSMutableDictionary *_mutablePayload;
}


@property (readonly) NSDictionary *payload;


-(id)description;
-(id)initWithEvent:(id)arg0 payload:(id)arg1 ;
-(void)addKey:(id)arg0 value:(id)arg1 ;
-(void)mergePayload:(id)arg0 ;
-(void)publish;
-(void)removeKey:(id)arg0 ;


@end


#endif