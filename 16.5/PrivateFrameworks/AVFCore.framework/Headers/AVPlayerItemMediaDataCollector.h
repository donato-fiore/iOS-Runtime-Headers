// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERITEMMEDIADATACOLLECTOR_H
#define AVPLAYERITEMMEDIADATACOLLECTOR_H


#import <Foundation/Foundation.h>

#import "AVPlayerItemMediaDataCollectorInternal.h"

@interface AVPlayerItemMediaDataCollector : NSObject {
    AVPlayerItemMediaDataCollectorInternal *_collectorInternal;
}




-(BOOL)_attachToPlayerItem:(id)arg0 ;
-(id)_weakReference;
-(id)init;
-(void)_detatchFromPlayerItem;
-(void)dealloc;


@end


#endif