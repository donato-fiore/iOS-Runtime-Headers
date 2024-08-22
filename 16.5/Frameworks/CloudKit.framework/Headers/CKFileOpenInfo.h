// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFILEOPENINFO_H
#define CKFILEOPENINFO_H

@class NSString, NSNumber, NSFileHandle;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKAssetDownloadStagingInfo.h"
#import "CKAssetDownloadStagingManager.h"

@interface CKFileOpenInfo : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, nonatomic) CKAssetDownloadStagingInfo *assetDownloadStagingInfo; // ivar: _assetDownloadStagingInfo
@property (weak) CKAssetDownloadStagingManager *assetDownloadStagingManager; // ivar: _assetDownloadStagingManager
@property (readonly, copy, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (readonly, copy, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (readonly, copy, nonatomic) NSNumber *generationID; // ivar: _generationID
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) BOOL shouldReadRawEncryptedData; // ivar: _shouldReadRawEncryptedData


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithUUID:(id)arg0 path:(id)arg1 deviceID:(id)arg2 fileID:(id)arg3 generationID:(id)arg4 shouldReadRawEncryptedData:(BOOL)arg5 fileHandle:(id)arg6 assetDownloadStagingInfo:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif