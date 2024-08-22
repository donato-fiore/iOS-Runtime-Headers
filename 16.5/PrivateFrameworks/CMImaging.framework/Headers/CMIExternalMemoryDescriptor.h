// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMIEXTERNALMEMORYDESCRIPTOR_H
#define CMIEXTERNALMEMORYDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface CMIExternalMemoryDescriptor : NSObject

@property (nonatomic) int allocatorType; // ivar: _allocatorType
@property (nonatomic) NSUInteger memSize; // ivar: _memSize


-(id)initWithMemSize:(NSUInteger)arg0 allocatorType:(int)arg1 ;


@end


#endif