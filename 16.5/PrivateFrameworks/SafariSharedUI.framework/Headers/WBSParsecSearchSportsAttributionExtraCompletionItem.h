// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPARSECSEARCHSPORTSATTRIBUTIONEXTRACOMPLETIONITEM_H
#define WBSPARSECSEARCHSPORTSATTRIBUTIONEXTRACOMPLETIONITEM_H

@class WBSParsecModel, NSString, SFSearchResult, WBSQuerySuggestion, NSURL;
@protocol WBSCompletionListItem;


#import "WBSParsecImageRepresentation.h"

@interface WBSParsecSearchSportsAttributionExtraCompletionItem : WBSParsecModel <WBSCompletionListItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger engagementDestination;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation; // ivar: _imageRepresentation
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (nonatomic) NSInteger parsecQueryID; // ivar: _parsecQueryID
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue; // ivar: sfSearchResultValue
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)schema;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif