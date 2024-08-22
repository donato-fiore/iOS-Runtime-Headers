// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DISKIMAGEPARAMSUDIF_XPC_H
#define DISKIMAGEPARAMSUDIF_XPC_H



#import "DiskImageParamsXPC.h"

@interface DiskImageParamsUDIF_XPC : DiskImageParamsXPC {
    unique_ptr<udif::header, std::default_delete<udif::header>> _header;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isWritableFormat;
-(NSUInteger)blockSize;
-(NSUInteger)numBlocks;
-(id)initWithBackendXPC:(id)arg0 header:(struct unique_ptr<udif::header, std::default_delete<udif::header>> )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)instanceID;
-(struct unique_ptr<DiskImage, std::default_delete<DiskImage>> )createSinkDiskImage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif