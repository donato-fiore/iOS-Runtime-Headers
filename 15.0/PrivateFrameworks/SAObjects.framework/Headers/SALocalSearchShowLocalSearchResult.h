// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALOCALSEARCHSHOWLOCALSEARCHRESULT_H
#define SALOCALSEARCHSHOWLOCALSEARCHRESULT_H

@class NSString, NSDate, NSData;


#import "SADomainCommand.h"

@interface SALocalSearchShowLocalSearchResult : SADomainCommand

@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSData *rawData;


+(id)showLocalSearchResult;
+(id)showLocalSearchResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif