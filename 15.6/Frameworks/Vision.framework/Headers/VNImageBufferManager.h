// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNIMAGEBUFFERMANAGER_H
#define VNIMAGEBUFFERMANAGER_H

@class CIContext, NSHashTable, NSLock;
@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface VNImageBufferManager : NSObject {
    CIContext *mainCIContext;
    id<MTLDevice> *mainCIContextMetalDevice;
    CIContext *lowPriorityCIContext;
    id<MTLDevice> *lowPriorityCIContextMetalDevice;
    NSHashTable *activeImageBuffers;
    NSLock *bufferTableLock;
}




+(id)manager;
-(id)init;
-(id)sharedCIContextWithOptions:(id)arg0 ;
-(void)dealloc;
-(void)purgeAllCaches;


@end


#endif