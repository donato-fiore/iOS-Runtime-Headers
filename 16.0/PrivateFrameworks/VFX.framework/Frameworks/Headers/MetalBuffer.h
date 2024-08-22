// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef METALBUFFER_H
#define METALBUFFER_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface MetalBuffer : NSObject

@property (retain, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (nonatomic) CGFloat lastReuseTime; // ivar: _lastReuseTime


-(id)initWithBuffer:(id)arg0 ;


@end


#endif