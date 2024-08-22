// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSHASHTAGQUERY_H
#define CSHASHTAGQUERY_H

@class NSMutableSet;


#import "CSSearchQuery.h"

@interface CSHashtagQuery : CSSearchQuery {
    NSMutableSet *_hashtags;
}


@property (copy) id *hashTagCompletionHandler; // ivar: _hashTagCompletionHandler


-(id)initWithQueryString:(id)arg0 bundleIDs:(id)arg1 ;
-(id)initWithQueryString:(id)arg0 context:(id)arg1 ;
-(void)handleCompletion:(id)arg0 ;
-(void)handleFoundAttributes:(id)arg0 values:(id)arg1 attributesHandler:(id)arg2 ;


@end


#endif