// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIFILEUPLOADASSET_H
#define DIFILEUPLOADASSET_H

@class NSFileHandle, NSURL;
@protocol NSSecureCoding;


#import "DIUploadAsset.h"

@interface DIFileUploadAsset : DIUploadAsset <NSSecureCoding>



@property (readonly, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 assetType:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif