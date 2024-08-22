// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUANFARTICLEDATAPROVIDERFACTORY_H
#define NUANFARTICLEDATAPROVIDERFACTORY_H

@class NSString;
@protocol NUArticleDataProviderFactory, FCContentContext, NUEmbedDataManager, NUFontRegistration, SXHost;

#import <Foundation/Foundation.h>

#import "NULinkedContentManagerFactory.h"

@interface NUANFArticleDataProviderFactory : NSObject <NUArticleDataProviderFactory>



@property (readonly, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<NUEmbedDataManager> *embedDataManager; // ivar: _embedDataManager
@property (readonly, nonatomic) NSObject<NUFontRegistration> *fontRegistration; // ivar: _fontRegistration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXHost> *host; // ivar: _host
@property (readonly, nonatomic) NULinkedContentManagerFactory *linkedContentManagerFactory; // ivar: _linkedContentManagerFactory
@property (readonly) Class superclass;


-(id)createArticleDataProviderWithArticle:(id)arg0 ;
-(id)initWithContentContext:(id)arg0 fontRegistration:(id)arg1 host:(id)arg2 embedDataManager:(id)arg3 linkedContentManagerFactory:(id)arg4 ;


@end


#endif