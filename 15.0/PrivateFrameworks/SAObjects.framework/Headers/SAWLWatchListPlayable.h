// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWLWATCHLISTPLAYABLE_H
#define SAWLWATCHLISTPLAYABLE_H

@class NSString, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAWLWatchListChannelDetails.h"

@interface SAWLWatchListPlayable : AceObject <SAAceSerializable>



@property (retain, nonatomic) SAWLWatchListChannelDetails *channelDetails;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL entitled;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL installed;
@property (copy, nonatomic) NSURL *playURL;
@property (readonly) Class superclass;


+(id)watchListPlayable;
+(id)watchListPlayableWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif