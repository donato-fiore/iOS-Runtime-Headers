// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMPLOADQP_H
#define SAMPLOADQP_H

@class NSArray, NSNumber;


#import "SADomainCommand.h"

@interface SAMPLoadQP : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *startPlaying;


+(id)loadQP;
+(id)loadQPWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif