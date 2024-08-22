// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAALARMALARMSHOW_H
#define SAALARMALARMSHOW_H

@class NSArray, NSString;
@protocol SAAlarmAlarmAction;


#import "AceObject.h"

@interface SAAlarmAlarmShow : AceObject <SAAlarmAlarmAction>



@property (copy, nonatomic) NSArray *alarmIds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)alarmShow;
+(id)alarmShowWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif