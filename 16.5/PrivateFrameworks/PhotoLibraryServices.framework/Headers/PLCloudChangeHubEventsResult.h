// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLOUDCHANGEHUBEVENTSRESULT_H
#define PLCLOUDCHANGEHUBEVENTSRESULT_H

@class NSString;
@protocol PLCloudChangeEventsResult, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PLCloudChangeHubEventsResult : NSObject <PLCloudChangeEventsResult>

 {
    NSObject<OS_xpc_object> *_events;
}


@property (readonly) NSUInteger changeHubEventIndex; // ivar: _changeHubEventIndex
@property (readonly, copy) NSString *currentTokenDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger resultType; // ivar: _resultType
@property (readonly) Class superclass;


-(id)initWithResultType:(NSInteger)arg0 events:(id)arg1 changeHubEventIndex:(NSUInteger)arg2 ;
-(id)initWithSuccesfulEvents:(id)arg0 changeHubEventIndex:(NSUInteger)arg1 ;
-(id)initWithUnsuccessfulResultType:(NSInteger)arg0 ;
-(id)localEventFromEvent:(id)arg0 ;
-(void)enumerateLocalEventsWithBlock:(id)arg0 ;


@end


#endif