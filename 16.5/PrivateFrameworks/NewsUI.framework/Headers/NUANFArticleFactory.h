// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUANFARTICLEFACTORY_H
#define NUANFARTICLEFACTORY_H

@class FCArticleController, NSString;
@protocol NUArticleFactory;

#import <Foundation/Foundation.h>


@interface NUANFArticleFactory : NSObject <NUArticleFactory>



@property (readonly, nonatomic) FCArticleController *articleController; // ivar: _articleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (nonatomic) NSInteger relativePriority; // ivar: _relativePriority
@property (readonly) Class superclass;


-(id)createArticleForHeadline:(id)arg0 ;
-(id)createArticlesForArticleIDs:(id)arg0 ;
-(id)initWithArticleController:(id)arg0 ;


@end


#endif