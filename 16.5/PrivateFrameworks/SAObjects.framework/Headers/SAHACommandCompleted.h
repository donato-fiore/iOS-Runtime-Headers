// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAHACOMMANDCOMPLETED_H
#define SAHACOMMANDCOMPLETED_H

@class NSString, NSArray, NSURL;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSArray *actionResults;
@property (copy, nonatomic) NSString *clientValidity;
@property (copy, nonatomic) NSString *commandOutcome;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *homeIdentifier;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *serverValidity;
@property (readonly) Class superclass;


+(id)commandCompleted;
+(id)commandCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif