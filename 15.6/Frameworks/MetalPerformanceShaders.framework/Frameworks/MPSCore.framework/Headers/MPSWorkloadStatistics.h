// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSWORKLOADSTATISTICS_H
#define MPSWORKLOADSTATISTICS_H


#import <Foundation/Foundation.h>


@interface MPSWorkloadStatistics : NSObject

@property (nonatomic) CGFloat deviceMemoryBytesRead; // ivar: _deviceMemoryBytesRead
@property (nonatomic) CGFloat deviceMemoryBytesWrite; // ivar: _deviceMemoryBytesWrite
@property (nonatomic) CGFloat float16Ops; // ivar: _float16Ops
@property (nonatomic) CGFloat float32Ops; // ivar: _float32Ops
@property (nonatomic) CGFloat integerOps; // ivar: _integerOps
@property (nonatomic) CGFloat threadgroupMemoryBytesRead; // ivar: _threadgroupMemoryBytesRead
@property (nonatomic) CGFloat threadgroupMemoryBytesWrite; // ivar: _threadgroupMemoryBytesWrite


+(id)new;
-(id)init;
-(void)dealloc;


@end


#endif