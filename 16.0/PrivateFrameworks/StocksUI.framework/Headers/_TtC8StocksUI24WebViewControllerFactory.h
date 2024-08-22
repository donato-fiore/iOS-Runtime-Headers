// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOCKSUI24WEBVIEWCONTROLLERFACTORY_H
#define _TTC8STOCKSUI24WEBVIEWCONTROLLERFACTORY_H

@protocol NUWebViewControllerFactoryType;

#import <Foundation/Foundation.h>


@interface _TtC8StocksUI24WebViewControllerFactory : NSObject <NUWebViewControllerFactoryType>

 {
    ? navigator;
    ? resolver;
    ? sceneStateManager;
}




-(id)createViewControllerForURL:(id)arg0 ;
-(id)init;


@end


#endif