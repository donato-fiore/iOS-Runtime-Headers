// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDISKSPACEFILEMANAGERFILEINFO_H
#define IMDISKSPACEFILEMANAGERFILEINFO_H

@class NSString;


#import "IMDiskSpaceFileInfo.h"

@interface IMDiskSpaceFileManagerFileInfo : IMDiskSpaceFileInfo

@property (readonly, nonatomic) NSUInteger purgableFlags; // ivar: _purgableFlags
@property (readonly, nonatomic) NSString *purgableFlagsString; // ivar: _purgableFlagsString


-(id)initWithPath:(id)arg0 fileSize:(struct IMFileSize )arg1 isDirectory:(BOOL)arg2 isAttachment:(BOOL)arg3 isSticker:(BOOL)arg4 purgableFlags:(NSUInteger)arg5 ;
-(void)addLogItems:(id)arg0 ;


@end


#endif