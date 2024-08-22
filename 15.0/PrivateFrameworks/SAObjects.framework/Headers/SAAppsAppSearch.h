// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAAPPSAPPSEARCH_H
#define SAAPPSAPPSEARCH_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAAppsAppSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *applicationName;


+(id)appSearch;
+(id)appSearchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif