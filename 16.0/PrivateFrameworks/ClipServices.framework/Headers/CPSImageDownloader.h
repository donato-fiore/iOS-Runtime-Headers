// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSIMAGEDOWNLOADER_H
#define CPSIMAGEDOWNLOADER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPSImageDownloader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requests;
}




-(id)init;
-(void)_downloadImageWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)downloadImageWithURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif