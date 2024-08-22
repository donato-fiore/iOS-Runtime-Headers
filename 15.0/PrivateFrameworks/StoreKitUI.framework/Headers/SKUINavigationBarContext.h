// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUINAVIGATIONBARCONTEXT_H
#define SKUINAVIGATIONBARCONTEXT_H

@class NSOperationQueue, UIViewController;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"
#import "SKUIResourceLoader.h"
#import "SKUILayoutCache.h"

@interface SKUINavigationBarContext : NSObject

@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (nonatomic) CGFloat maximumNavigationBarWidth; // ivar: _maximumNavigationBarWidth
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader; // ivar: _resourceLoader
@property (retain, nonatomic) SKUILayoutCache *textLayoutCache; // ivar: _textLayoutCache




@end


#endif