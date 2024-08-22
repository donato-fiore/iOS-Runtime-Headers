// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKWEBVIEWFACTORY_H
#define MKWEBVIEWFACTORY_H

@class WKProcessPool, NSCache;

#import <Foundation/Foundation.h>


@interface MKWebViewFactory : NSObject {
    WKProcessPool *_processPool;
    NSCache *_webViewCache;
}




+(id)sharedWebViewFactory;
-(id)dequeueItemWithBridgeConfiguration:(id)arg0 ;
-(id)init;
-(void)requeueItem:(id)arg0 ;


@end


#endif