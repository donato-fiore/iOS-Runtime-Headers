// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGMETALALLOCATORDESCRIPTOR_H
#define FIGMETALALLOCATORDESCRIPTOR_H

@class NSString;
@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface FigMetalAllocatorDescriptor : NSObject

@property (nonatomic) BOOL allowFallback; // ivar: _allowFallback
@property (nonatomic) int compressionLevel; // ivar: _compressionLevel
@property (retain, nonatomic) NSObject<MTLBuffer> *externalBuffer; // ivar: _externalBuffer
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger memSize; // ivar: _memSize
@property (nonatomic) NSUInteger resourceOptions; // ivar: _resourceOptions
@property (nonatomic) BOOL wireMemory; // ivar: _wireMemory


-(id)init;


@end


#endif