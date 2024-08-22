// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORELATEDSEARCHSUGGESTION_H
#define GEORELATEDSEARCHSUGGESTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDRelatedSearchSuggestion.h"

@interface GEORelatedSearchSuggestion : NSObject

@property (readonly, nonatomic) NSString *displayString;
@property (retain, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion; // ivar: _relatedSearchSuggestion
@property (readonly, nonatomic) NSString *searchBarDisplayToken;


-(id)_suggestionEntryMetadata;
-(id)initWithPDRelatedSearchSuggestion:(id)arg0 ;


@end


#endif