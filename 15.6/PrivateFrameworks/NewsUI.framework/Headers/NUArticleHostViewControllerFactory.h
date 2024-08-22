// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUARTICLEHOSTVIEWCONTROLLERFACTORY_H
#define NUARTICLEHOSTVIEWCONTROLLERFACTORY_H

@class NSString;
@protocol NUArticleHostViewControllerFactory, NUArticleViewControllerFactory, NUArticleContentSizeManager, NUErrorMessageFactory, NUSettings;

#import <Foundation/Foundation.h>


@interface NUArticleHostViewControllerFactory : NSObject <NUArticleHostViewControllerFactory>



@property (readonly, nonatomic) NSObject<NUArticleViewControllerFactory> *articleViewControllerFactory; // ivar: _articleViewControllerFactory
@property (readonly, nonatomic) NSObject<NUArticleContentSizeManager> *contentSizeManager; // ivar: _contentSizeManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<NUErrorMessageFactory> *errorMessageFactory; // ivar: _errorMessageFactory
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSObject<NUSettings> *settings; // ivar: _settings
@property (readonly) Class superclass;


-(id)createArticleHostViewControllerForArticle:(id)arg0 ;
-(id)initWithArticleViewControllerFactory:(id)arg0 settings:(id)arg1 errorMessageFactory:(id)arg2 contentSizeManager:(id)arg3 ;


@end


#endif