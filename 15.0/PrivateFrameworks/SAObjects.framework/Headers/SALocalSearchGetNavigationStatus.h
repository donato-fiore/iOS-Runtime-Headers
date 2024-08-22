// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALOCALSEARCHGETNAVIGATIONSTATUS_H
#define SALOCALSEARCHGETNAVIGATIONSTATUS_H

@class NSNumber;


#import "SADomainCommand.h"

@interface SALocalSearchGetNavigationStatus : SADomainCommand

@property (copy, nonatomic) NSNumber *getRoute;


+(id)getNavigationStatus;
+(id)getNavigationStatusWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif