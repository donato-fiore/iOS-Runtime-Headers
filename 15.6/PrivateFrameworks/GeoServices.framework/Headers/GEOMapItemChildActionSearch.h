// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPITEMCHILDACTIONSEARCH_H
#define GEOMAPITEMCHILDACTIONSEARCH_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEORelatedSearchSuggestion.h"

@interface GEOMapItemChildActionSearch : NSObject

@property (readonly, nonatomic) NSString *displayString;
@property (retain, nonatomic) GEORelatedSearchSuggestion *relatedSearchSuggestion; // ivar: _relatedSearchSuggestion


-(id)initWithChildActionSearch:(id)arg0 ;


@end


#endif