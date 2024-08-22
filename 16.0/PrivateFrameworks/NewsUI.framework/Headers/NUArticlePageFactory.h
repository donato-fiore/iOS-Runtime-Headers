// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUARTICLEPAGEFACTORY_H
#define NUARTICLEPAGEFACTORY_H

@protocol NUArticleActivityFactory, NUArticleFactory, NUArticleHostViewControllerFactory;

#import <Foundation/Foundation.h>


@interface NUArticlePageFactory : NSObject

@property (readonly, nonatomic) NSObject<NUArticleActivityFactory> *articleActivityFactory; // ivar: _articleActivityFactory
@property (readonly, nonatomic) NSObject<NUArticleFactory> *articleFactory; // ivar: _articleFactory
@property (readonly, nonatomic) NSObject<NUArticleHostViewControllerFactory> *articleHostViewControllerFactory; // ivar: _articleHostViewControllerFactory


-(id)createPagesForArticleIDs:(id)arg0 ;
-(id)initWithArticleFactory:(id)arg0 articleActivityFactory:(id)arg1 articleHostViewControllerFactory:(id)arg2 ;


@end


#endif