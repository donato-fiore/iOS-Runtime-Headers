// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACLOCKADDCOMPLETED_H
#define SACLOCKADDCOMPLETED_H

@class NSString, NSURL;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAClockAddCompleted : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (nonatomic) BOOL alreadyExists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *worldClockId;


+(id)addCompleted;
+(id)addCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif