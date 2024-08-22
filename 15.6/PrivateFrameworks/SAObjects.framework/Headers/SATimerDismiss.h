// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATIMERDISMISS_H
#define SATIMERDISMISS_H

@class NSArray;


#import "SADomainCommand.h"

@interface SATimerDismiss : SADomainCommand

@property (copy, nonatomic) NSArray *timerIds;


+(id)dismiss;
+(id)dismissWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif