// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAWLGETWATCHLISTPLAYABLES_H
#define SAWLGETWATCHLISTPLAYABLES_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAWLGetWatchListPlayables : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *statsId;


+(id)getWatchListPlayables;
+(id)getWatchListPlayablesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif