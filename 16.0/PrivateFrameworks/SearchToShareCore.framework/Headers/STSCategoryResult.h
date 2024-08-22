// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSCATEGORYRESULT_H
#define STSCATEGORYRESULT_H

@class SFSearchResult, SFSearchSuggestion, NSString;

#import <Foundation/Foundation.h>


@interface STSCategoryResult : NSObject

@property (nonatomic) BOOL clearButtonHidden; // ivar: _clearButtonHidden
@property (retain, nonatomic) SFSearchResult *searchResult; // ivar: _searchResult
@property (retain, nonatomic) SFSearchSuggestion *suggestion; // ivar: _suggestion
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type




@end


#endif