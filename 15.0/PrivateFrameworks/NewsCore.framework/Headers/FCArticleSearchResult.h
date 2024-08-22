// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCARTICLESEARCHRESULT_H
#define FCARTICLESEARCHRESULT_H

@class NSString, SFSearchResult;
@protocol FCHeadlineProviding;

#import <Foundation/Foundation.h>


@interface FCArticleSearchResult : NSObject

@property (readonly, nonatomic) NSString *articleID; // ivar: _articleID
@property (readonly, nonatomic) NSObject<FCHeadlineProviding> *deflatedHeadline; // ivar: _deflatedHeadline
@property (retain, nonatomic) NSObject<FCHeadlineProviding> *inflatedHeadline; // ivar: _inflatedHeadline
@property (retain, nonatomic) SFSearchResult *searchResult; // ivar: _searchResult


-(id)initWithParsecSearchResult:(id)arg0 cloudContext:(id)arg1 ;


@end


#endif