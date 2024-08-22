// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUANFLINKEDCONTENTPROVIDERFACTORY_H
#define NUANFLINKEDCONTENTPROVIDERFACTORY_H

@class NSString;
@protocol NULinkedContentProviderFactory, FCContentContext;

#import <Foundation/Foundation.h>


@interface NUANFLinkedContentProviderFactory : NSObject <NULinkedContentProviderFactory>



@property (readonly, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createLinkedContentProviderForArticle:(id)arg0 ;
-(id)initWithContentContext:(id)arg0 ;


@end


#endif