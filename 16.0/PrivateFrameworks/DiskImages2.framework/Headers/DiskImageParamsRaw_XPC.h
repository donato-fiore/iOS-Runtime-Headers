// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DISKIMAGEPARAMSRAW_XPC_H
#define DISKIMAGEPARAMSRAW_XPC_H



#import "DiskImageParamsXPC.h"

@interface DiskImageParamsRaw_XPC : DiskImageParamsXPC



+(BOOL)supportsSecureCoding;
-(BOOL)isSparseFormat;
-(BOOL)isWritableFormat;
-(NSUInteger)numBlocks;
-(struct unique_ptr<DiskImage, std::default_delete<DiskImage>> )createSinkDiskImage;


@end


#endif