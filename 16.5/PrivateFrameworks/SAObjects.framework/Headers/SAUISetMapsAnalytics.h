// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUISETMAPSANALYTICS_H
#define SAUISETMAPSANALYTICS_H

@class NSString, NSDate;


#import "SABaseClientBoundCommand.h"

@interface SAUISetMapsAnalytics : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif