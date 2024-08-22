// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SATIMERTIMERSHOW_H
#define SATIMERTIMERSHOW_H

@class NSArray, NSString;
@protocol SATimerTimerAction;


#import "SADomainCommand.h"

@interface SATimerTimerShow : SADomainCommand <SATimerTimerAction>



@property (copy, nonatomic) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *timerIds;


+(id)timerShow;
+(id)timerShowWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif