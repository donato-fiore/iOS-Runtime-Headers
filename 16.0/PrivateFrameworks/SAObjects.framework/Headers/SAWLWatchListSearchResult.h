// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAWLWATCHLISTSEARCHRESULT_H
#define SAWLWATCHLISTSEARCHRESULT_H

@class NSString, NSDate;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIImageResource.h"

@interface SAWLWatchListSearchResult : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SAUIImageResource *evodFeaturingImage;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) BOOL isEvod;
@property (copy, nonatomic) NSString *network;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSString *shelfType;
@property (copy, nonatomic) NSString *studio;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(id)watchListSearchResult;
+(id)watchListSearchResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif