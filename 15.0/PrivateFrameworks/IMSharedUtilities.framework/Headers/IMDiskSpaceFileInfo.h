// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDISKSPACEFILEINFO_H
#define IMDISKSPACEFILEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMDiskSpaceFileInfo : NSObject

@property (readonly, nonatomic) IMFileSize fileSize; // ivar: _fileSize
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly, nonatomic) BOOL isAttachment; // ivar: _isAttachment
@property (readonly, nonatomic) BOOL isDirectory; // ivar: _isDirectory
@property (readonly, nonatomic) BOOL isPurgableOnDisk; // ivar: _isPurgableOnDisk
@property (readonly, nonatomic) BOOL isSticker; // ivar: _isSticker
@property (readonly, nonatomic) NSString *path; // ivar: _path


-(id)initWithPath:(id)arg0 fileSize:(struct IMFileSize )arg1 isDirectory:(BOOL)arg2 isAttachment:(BOOL)arg3 isSticker:(BOOL)arg4 isPurgableOnDisk:(BOOL)arg5 ;
-(id)logString;
-(void)addLogItems:(id)arg0 ;
-(void)log;


@end


#endif