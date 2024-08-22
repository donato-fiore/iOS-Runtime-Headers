// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADAILYBRIEFINGGETETAINFO_H
#define SADAILYBRIEFINGGETETAINFO_H



#import "SABaseClientBoundCommand.h"

@interface SADailyBriefingGetETAInfo : SABaseClientBoundCommand

@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif