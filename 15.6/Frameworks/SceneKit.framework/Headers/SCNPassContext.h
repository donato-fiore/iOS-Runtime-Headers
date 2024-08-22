// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNPASSCONTEXT_H
#define SCNPASSCONTEXT_H

@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

#import <Foundation/Foundation.h>


@interface SCNPassContext : NSObject {
    *? _context;
}


@property (readonly, nonatomic) NSObject<MTLCommandBuffer> *commandBuffer;
@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue;
@property (readonly, nonatomic) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) CGFloat time;


-(id)inputTextureWithName:(id)arg0 ;
-(id)outputTextureWithName:(id)arg0 ;


@end


#endif