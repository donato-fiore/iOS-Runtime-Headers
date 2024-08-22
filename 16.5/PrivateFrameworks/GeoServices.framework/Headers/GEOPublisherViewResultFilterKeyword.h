// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPUBLISHERVIEWRESULTFILTERKEYWORD_H
#define GEOPUBLISHERVIEWRESULTFILTERKEYWORD_H


#import <Foundation/Foundation.h>

#import "GEOPDPublisherViewResultFilterKeyword.h"
#import "GEORelatedSearchSuggestion.h"

@interface GEOPublisherViewResultFilterKeyword : NSObject {
    GEOPDPublisherViewResultFilterKeyword *_filterKeywordIdentifier;
}


@property (readonly, nonatomic) GEOPDPublisherViewResultFilterKeyword *keywordIdentifier;
@property (readonly, nonatomic) GEORelatedSearchSuggestion *searchSuggestion;


-(id)initWithFilterKeywordIdentifier:(id)arg0 ;


@end


#endif