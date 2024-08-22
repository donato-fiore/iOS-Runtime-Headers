// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSMAPSIMAGELOADER_H
#define CPSMAPSIMAGELOADER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPSImageDownloader.h"

@interface CPSMapsImageLoader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CPSImageDownloader *_imageDownloader;
}




-(id)initWithImageDownloader:(id)arg0 ;
-(void)_loadImageForGEOFeatureStyleAttributes:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadImageForGEOStyleAttributes:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadImageForMapItemMUID:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif