// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSEARCHRESULT_H
#define FCSEARCHRESULT_H


#import <Foundation/Foundation.h>

#import "FCArticleSearchOperationResult.h"
#import "FCTagSearchOperationResult.h"

@interface FCSearchResult : NSObject

@property (retain, nonatomic) FCArticleSearchOperationResult *articleSearchResult; // ivar: _articleSearchResult
@property (retain, nonatomic) FCTagSearchOperationResult *tagSearchResult; // ivar: _tagSearchResult




@end


#endif