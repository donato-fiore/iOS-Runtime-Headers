// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEODISPLAYHEADERSUBSTITUTE_H
#define GEODISPLAYHEADERSUBSTITUTE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDDisplayHeaderSubstitute.h"
#import "GEORelatedSearchSuggestion.h"

@interface GEODisplayHeaderSubstitute : NSObject

@property (retain, nonatomic) GEOPDDisplayHeaderSubstitute *displayHeaderSubstitute; // ivar: _displayHeaderSubstitute
@property (readonly, nonatomic) NSString *interpretedQuery;
@property (retain, nonatomic) GEORelatedSearchSuggestion *relatedSearchSuggestion; // ivar: _relatedSearchSuggestion
@property (readonly, nonatomic) int substituteType;


-(id)initWithPDDisplayHeaderSubstitute:(id)arg0 ;


@end


#endif