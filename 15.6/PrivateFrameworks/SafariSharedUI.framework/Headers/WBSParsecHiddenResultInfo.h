// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPARSECHIDDENRESULTINFO_H
#define WBSPARSECHIDDENRESULTINFO_H

@class NSDictionary;
@protocol WBSCompletionListItem;

#import <Foundation/Foundation.h>

#import "WBSParsecSearchResult.h"

@interface WBSParsecHiddenResultInfo : NSObject

@property (readonly, nonatomic) NSDictionary *feedbackDictionaryRepresentation;
@property (readonly, nonatomic) WBSParsecSearchResult *hiddenResult; // ivar: _hiddenResult
@property (readonly, nonatomic) NSObject<WBSCompletionListItem> *preferredCompletionListItem; // ivar: _preferredCompletionListItem
@property (nonatomic) NSUInteger preferredCompletionListItemPositionInCompletionList; // ivar: _preferredCompletionListItemPositionInCompletionList
@property (nonatomic) NSUInteger preferredCompletionListItemPositionInFrequentlyVisitedSites; // ivar: _preferredCompletionListItemPositionInFrequentlyVisitedSites
@property (readonly, nonatomic) NSInteger reasonForHidingResult; // ivar: _reasonForHidingResult


-(id)initWithHiddenResult:(id)arg0 preferredCompletionListItem:(id)arg1 reason:(NSInteger)arg2 ;


@end


#endif