// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAPUNCHOUTOUTCOME_H
#define SAPUNCHOUTOUTCOME_H

@class NSString, NSDictionary;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAPunchoutOutcome : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *originalCommandId;
@property (copy, nonatomic) NSDictionary *outcomes;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)punchoutOutcome;
+(id)punchoutOutcomeWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif