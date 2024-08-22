// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAWLADDCONTENTTOWATCHLIST_H
#define SAWLADDCONTENTTOWATCHLIST_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAWLAddContentToWatchList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *canonicalId;


+(id)addContentToWatchList;
+(id)addContentToWatchListWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif