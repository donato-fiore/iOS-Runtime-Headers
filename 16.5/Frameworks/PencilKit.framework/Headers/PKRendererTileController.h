// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKRENDERERTILECONTROLLER_H
#define PKRENDERERTILECONTROLLER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKRendererTileController : NSObject {
    NSObject<OS_dispatch_queue> *_tileQueue;
    NSMutableDictionary *_tileFramebuffers;
    NSMutableDictionary *_tileMultiplyFramebuffers;
}




-(id)init;


@end


#endif