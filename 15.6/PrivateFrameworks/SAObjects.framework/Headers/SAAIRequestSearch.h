// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAAIREQUESTSEARCH_H
#define SAAIREQUESTSEARCH_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAAIRequestSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *acousticIdSearchSessionId;


+(id)requestSearch;
+(id)requestSearchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif