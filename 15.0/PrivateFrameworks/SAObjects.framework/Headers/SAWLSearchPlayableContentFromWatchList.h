// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWLSEARCHPLAYABLECONTENTFROMWATCHLIST_H
#define SAWLSEARCHPLAYABLECONTENTFROMWATCHLIST_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAWLSearchPlayableContentFromWatchList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) BOOL onlyReturnNextItem;
@property (copy, nonatomic) NSString *siriLocale;
@property (copy, nonatomic) NSString *title;


+(id)searchPlayableContentFromWatchList;
+(id)searchPlayableContentFromWatchListWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif