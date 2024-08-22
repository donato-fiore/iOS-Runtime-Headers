// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REAPPICONCACHE_H
#define REAPPICONCACHE_H

@class NSCache;
@protocol OS_dispatch_queue;


#import "RESingleton.h"

@interface REAppIconCache : RESingleton {
    NSCache *_imageCache;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)_init;
-(void)_loadIconForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_loadRemoteIconForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)iconForApplicationWithIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif