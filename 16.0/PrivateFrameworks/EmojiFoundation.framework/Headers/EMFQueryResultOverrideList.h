// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMFQUERYRESULTOVERRIDELIST_H
#define EMFQUERYRESULTOVERRIDELIST_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface EMFQueryResultOverrideList : NSObject {
    NSDictionary *_overrideMap;
}




-(id)_metadataForString:(id)arg0 ;
-(id)_overriddenResultsRawStringExactMatchForQuery:(id)arg0 ;
-(id)_overriddenResultsRawStringExactMatchForRawString:(id)arg0 andSearchType:(NSUInteger)arg1 ;
-(id)_overriddenResultsRawStringPrefixMatchForQuery:(id)arg0 ;
-(id)_overriddenResultsTokenExactMatchForQuery:(id)arg0 ;
-(id)_overriddenResultsTokenPrefixMatchForQuery:(id)arg0 ;
-(id)initWithOverrideListURL:(id)arg0 ;
-(id)overriddenResultsForQuery:(id)arg0 ;
-(id)overriddenResultsForQuery:(id)arg0 searchType:(NSUInteger)arg1 ;


@end


#endif