// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOALLCOLLECTIONSVIEWRESULTFILTERTYPEKEYWORD_H
#define GEOALLCOLLECTIONSVIEWRESULTFILTERTYPEKEYWORD_H


#import <Foundation/Foundation.h>

#import "GEOPDAllCollectionsViewResultFilterTypeKeyword.h"
#import "GEORelatedSearchSuggestion.h"

@interface GEOAllCollectionsViewResultFilterTypeKeyword : NSObject {
    GEOPDAllCollectionsViewResultFilterTypeKeyword *_filterKeywordIdentifier;
}


@property (readonly, nonatomic) GEOPDAllCollectionsViewResultFilterTypeKeyword *keywordIdentifier;
@property (readonly, nonatomic) GEORelatedSearchSuggestion *searchSuggestion;


-(id)initWithFilterKeywordIdentifier:(id)arg0 ;


@end


#endif