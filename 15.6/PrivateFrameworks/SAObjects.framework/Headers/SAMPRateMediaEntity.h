// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMPRATEMEDIAENTITY_H
#define SAMPRATEMEDIAENTITY_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAMPRateMediaEntity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *hashedRouteUID;
@property (nonatomic) NSInteger rating;


+(id)rateMediaEntity;
+(id)rateMediaEntityWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif