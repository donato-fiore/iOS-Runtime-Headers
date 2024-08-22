// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEPROVIDERKERNELMATERIALIZATIONINFO_H
#define NSFILEPROVIDERKERNELMATERIALIZATIONINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSFileProviderKernelFileMaterializationInfo.h"
#import "NSFileProviderKernelPartialFolderMaterializationInfo.h"

@interface NSFileProviderKernelMaterializationInfo : NSObject <NSSecureCoding>



@property (readonly) NSFileProviderKernelFileMaterializationInfo *fileMaterializationInfo; // ivar: fileMaterializationInfo
@property (readonly) unsigned int operation; // ivar: operation
@property (readonly) NSFileProviderKernelPartialFolderMaterializationInfo *partialFolderMaterializationInfo; // ivar: partialFolderMaterializationInfo


+(BOOL)supportsSecureCoding;
+(id)fileMaterializationInfoWithOperation:(unsigned int)arg0 size:(NSInteger)arg1 offset:(NSInteger)arg2 ;
+(id)kernelMaterializationInfoWithOperation:(unsigned int)arg0 ;
+(id)partialFolderMaterializationInfoWithOperation:(unsigned int)arg0 fileName:(char *)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif