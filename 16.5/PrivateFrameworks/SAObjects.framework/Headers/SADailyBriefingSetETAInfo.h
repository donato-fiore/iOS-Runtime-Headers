// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADAILYBRIEFINGSETETAINFO_H
#define SADAILYBRIEFINGSETETAINFO_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SADailyBriefingSetETAInfo : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *destination;
@property (nonatomic) CGFloat eta;
@property (copy, nonatomic) NSString *transportType;
@property (copy, nonatomic) NSString *viaRoute;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif