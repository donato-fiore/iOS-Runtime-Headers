// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDSEEDINGUPLOADITEM_H
#define DEDSEEDINGUPLOADITEM_H

@class NSString, NSURLSessionUploadTask;


#import "DEDAttachmentItem.h"

@interface DEDSeedingUploadItem : DEDAttachmentItem

@property NSInteger bytesUploaded; // ivar: _bytesUploaded
@property BOOL completed; // ivar: _completed
@property (retain) NSString *extensionID; // ivar: _extensionID
@property (retain) NSString *filePromiseUUID; // ivar: _filePromiseUUID
@property NSInteger totalBytesExpectedToSend; // ivar: _totalBytesExpectedToSend
@property (retain) NSURLSessionUploadTask *uploadTask; // ivar: _uploadTask


+(id)itemAtPath:(id)arg0 enclosedFilename:(id)arg1 extensionID:(id)arg2 ;
-(id)description;
-(id)promiseFilename;
-(id)publicDescription;


@end


#endif