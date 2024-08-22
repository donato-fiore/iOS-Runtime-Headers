// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SANPSKIPTIMEINTERVAL_H
#define SANPSKIPTIMEINTERVAL_H

@class NSNumber, NSArray;


#import "SADomainCommand.h"

@interface SANPSkipTimeInterval : SADomainCommand

@property (copy, nonatomic) NSNumber *adjustmentInMilliseconds;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;


+(id)skipTimeInterval;
+(id)skipTimeIntervalWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif