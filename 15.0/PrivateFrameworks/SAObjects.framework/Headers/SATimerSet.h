// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SATIMERSET_H
#define SATIMERSET_H

@class NSString;
@protocol SATimerTimerAction;


#import "SADomainCommand.h"
#import "SATimerObject.h"

@interface SATimerSet : SADomainCommand <SATimerTimerAction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SATimerObject *timer;


+(id)set;
+(id)setWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif