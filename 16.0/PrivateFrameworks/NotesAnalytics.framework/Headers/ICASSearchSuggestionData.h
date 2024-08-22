// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSEARCHSUGGESTIONDATA_H
#define ICASSEARCHSUGGESTIONDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASSearchSuggestionType.h"

@interface ICASSearchSuggestionData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASSearchSuggestionType *searchSuggestionType; // ivar: _searchSuggestionType


+(id)dataName;
-(id)initWithSearchSuggestionType:(id)arg0 ;
-(id)toDict;


@end


#endif