// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMETRICS_H
#define SAMETRICS_H

@class NSString, NSDictionary;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAMetrics : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *eventInformation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *originalCommandId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *speechId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *timings;


+(id)metrics;
+(id)metricsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif