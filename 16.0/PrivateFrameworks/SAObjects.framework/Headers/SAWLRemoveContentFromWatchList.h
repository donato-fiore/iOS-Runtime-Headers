// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAWLREMOVECONTENTFROMWATCHLIST_H
#define SAWLREMOVECONTENTFROMWATCHLIST_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAWLRemoveContentFromWatchList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *siriLocale;
@property (copy, nonatomic) NSString *title;


+(id)removeContentFromWatchList;
+(id)removeContentFromWatchListWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif