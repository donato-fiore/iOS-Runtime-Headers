// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DISKIMAGEPARAMSAPPLESPARSEIMAGE_XPC_H
#define DISKIMAGEPARAMSAPPLESPARSEIMAGE_XPC_H



#import "DiskImageParamsXPC.h"

@interface DiskImageParamsAppleSparseImage_XPC : DiskImageParamsXPC {
    unique_ptr<di_shadow::header, std::default_delete<di_shadow::header>> _header;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isSparseFormat;
-(BOOL)isWritableFormat;
-(NSUInteger)numBlocks;
-(id)initWithBackendXPC:(id)arg0 header:(struct unique_ptr<di_shadow::header, std::default_delete<di_shadow::header>> )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)instanceID;
-(int)setSizeWithDiskImage:(*void)arg0 newSize:(NSUInteger)arg1 ;
-(struct unique_ptr<DiskImage, std::default_delete<DiskImage>> )createSinkDiskImage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif