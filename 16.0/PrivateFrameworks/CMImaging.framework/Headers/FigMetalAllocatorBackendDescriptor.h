// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGMETALALLOCATORBACKENDDESCRIPTOR_H
#define FIGMETALALLOCATORBACKENDDESCRIPTOR_H

@class NSString;
@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface FigMetalAllocatorBackendDescriptor : NSObject

@property (retain, nonatomic) NSObject<MTLBuffer> *externalBuffer; // ivar: _externalBuffer
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger memSize; // ivar: _memSize
@property (nonatomic) NSUInteger resourceOptions; // ivar: _resourceOptions
@property (nonatomic) BOOL wireMemory; // ivar: _wireMemory


-(id)description;
-(id)init;


@end


#endif