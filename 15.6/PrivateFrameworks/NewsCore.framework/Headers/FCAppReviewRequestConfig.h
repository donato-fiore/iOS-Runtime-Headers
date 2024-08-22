// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCAPPREVIEWREQUESTCONFIG_H
#define FCAPPREVIEWREQUESTCONFIG_H


#import <Foundation/Foundation.h>


@interface FCAppReviewRequestConfig : NSObject

@property (readonly, nonatomic) NSInteger minNumberOfCombinedActions; // ivar: _minNumberOfCombinedActions
@property (readonly, nonatomic) NSInteger minNumberOfEndOfArticleReads; // ivar: _minNumberOfEndOfArticleReads
@property (readonly, nonatomic) NSInteger minNumberOfLikedArticles; // ivar: _minNumberOfLikedArticles
@property (readonly, nonatomic) NSInteger minNumberOfSavedArticles; // ivar: _minNumberOfSavedArticles
@property (readonly, nonatomic) NSInteger minNumberOfSharedArticles; // ivar: _minNumberOfSharedArticles
@property (readonly, nonatomic) NSInteger quiescenceInterval; // ivar: _quiescenceInterval


-(id)initWithDictionary:(id)arg0 ;


@end


#endif