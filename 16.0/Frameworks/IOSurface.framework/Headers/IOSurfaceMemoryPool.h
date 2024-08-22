// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOSURFACEMEMORYPOOL_H
#define IOSURFACEMEMORYPOOL_H


#import <Foundation/Foundation.h>


@interface IOSurfaceMemoryPool : NSObject {
    NSUInteger _poolId;
    unsigned int _poolPort;
}


@property (readonly) NSUInteger poolId;


-(id)copyDebugInfo;
-(id)initWithProperties:(id)arg0 ;
-(int)ensureMemory:(id)arg0 ;
-(int)flush:(id)arg0 ;
-(void)dealloc;


@end


#endif