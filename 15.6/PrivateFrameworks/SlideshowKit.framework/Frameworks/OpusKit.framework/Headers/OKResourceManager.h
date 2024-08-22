// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKRESOURCEMANAGER_H
#define OKRESOURCEMANAGER_H

@class OFLRUCache, NSArray;

#import <Foundation/Foundation.h>

#import "OKPresentationViewControllerProxy.h"

@interface OKResourceManager : NSObject {
    OFLRUCache *_resources;
    OKPresentationViewControllerProxy *_presentationViewController;
    NSArray *_resourceLoaders;
}




-(id)initWithPresentationViewController:(id)arg0 ;
-(id)resourceLoaderForURL:(id)arg0 ;
-(id)resourceWithURL:(id)arg0 copy:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif