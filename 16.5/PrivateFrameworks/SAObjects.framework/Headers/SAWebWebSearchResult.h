// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAWEBWEBSEARCHRESULT_H
#define SAWEBWEBSEARCHRESULT_H

@class NSString, NSArray, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAWebWebSearchResult : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *imageResults;
@property (copy, nonatomic) NSArray *newsResults;
@property (copy, nonatomic) NSArray *relatedSearchResults;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *totalImageResults;
@property (copy, nonatomic) NSNumber *totalNewsResults;
@property (copy, nonatomic) NSNumber *totalVideoResults;
@property (copy, nonatomic) NSNumber *totalWebResults;
@property (copy, nonatomic) NSArray *videoResults;
@property (copy, nonatomic) NSArray *webResults;


+(id)webSearchResult;
+(id)webSearchResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif