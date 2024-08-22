// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUWEBVIEWFACTORY_H
#define MUWEBVIEWFACTORY_H

@class WKProcessPool, NSCache;

#import <Foundation/Foundation.h>


@interface MUWebViewFactory : NSObject {
    WKProcessPool *_processPool;
    NSCache *_webViewCache;
}




+(id)sharedWebViewFactory;
-(id)dequeueItemWithBridgeConfiguration:(id)arg0 ;
-(id)init;
-(void)requeueItem:(id)arg0 ;


@end


#endif