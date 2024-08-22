// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8STOCKSUI26LINKEDSTOCKPROVIDERFACTORY_H
#define _TTC8STOCKSUI26LINKEDSTOCKPROVIDERFACTORY_H

@protocol NULinkedContentProviderFactory;

#import <Foundation/Foundation.h>


@interface _TtC8StocksUI26LinkedStockProviderFactory : NSObject <NULinkedContentProviderFactory>

 {
    ? metadataManager;
}




-(id)createLinkedContentProviderForArticle:(id)arg0 ;
-(id)init;


@end


#endif