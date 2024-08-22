// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SANPSETSHUFFLEMODE_H
#define SANPSETSHUFFLEMODE_H

@class NSArray, NSString;


#import "SADomainCommand.h"

@interface SANPSetShuffleMode : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *shuffleMode;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif