// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAREMEMBERSGETRELATIVEAPPUSAGEPROBABILITIES_H
#define SAREMEMBERSGETRELATIVEAPPUSAGEPROBABILITIES_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"

@interface SARemembersGetRelativeAppUsageProbabilities : SABaseClientBoundCommand <SAAceSerializable>



@property (copy, nonatomic) NSArray *bundleIDs;
@property (nonatomic) NSInteger days;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)getRelativeAppUsageProbabilities;
+(id)getRelativeAppUsageProbabilitiesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif