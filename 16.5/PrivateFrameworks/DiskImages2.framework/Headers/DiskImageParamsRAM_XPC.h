// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DISKIMAGEPARAMSRAM_XPC_H
#define DISKIMAGEPARAMSRAM_XPC_H

@class XPC, NSString;



@interface DiskImageParamsRAM_XPC : XPC

@property (readonly, copy, nonatomic) NSString *ramSizeStr; // ivar: _ramSizeStr


+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(struct unique_ptr<DiskImage, std::default_delete<DiskImage>> )createSinkDiskImage;
-(void)setBlockSize:(NSUInteger)arg0 ;


@end


#endif