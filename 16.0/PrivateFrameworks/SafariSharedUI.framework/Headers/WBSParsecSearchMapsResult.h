// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPARSECSEARCHMAPSRESULT_H
#define WBSPARSECSEARCHMAPSRESULT_H

@class NSString, SFSearchResult, WBSQuerySuggestion;
@protocol WBSParsecSearchMapsResult, WBSParsecSearchSession;


#import "WBSParsecLegacySearchResult.h"
#import "WBSParsecSearchMapsResultFeedbackSender.h"

@interface WBSParsecSearchMapsResult : WBSParsecLegacySearchResult <WBSParsecSearchMapsResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger engagementDestination;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender; // ivar: _mapsFeedbackSender
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (nonatomic) NSInteger parsecQueryID;
@property (retain, nonatomic) NSObject<WBSParsecSearchSession> *parsecSearchSession; // ivar: _parsecSearchSession
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;


-(id)initWithDictionary:(id)arg0 ;


@end


#endif