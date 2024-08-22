// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAFMFSEARCH_H
#define SAFMFSEARCH_H

@class NSArray, NSString;


#import "SADomainCommand.h"
#import "SALocation.h"

@interface SAFmfSearch : SADomainCommand

@property (retain, nonatomic) SALocation *currentLocation;
@property (copy, nonatomic) NSArray *friends;
@property (copy, nonatomic) NSString *proximity;
@property (retain, nonatomic) SALocation *requestedLocation;


+(id)search;
+(id)searchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif