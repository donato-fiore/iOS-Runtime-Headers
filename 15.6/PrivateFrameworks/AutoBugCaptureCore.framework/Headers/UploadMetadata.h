// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPLOADMETADATA_H
#define UPLOADMETADATA_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface UploadMetadata : NSObject

@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic) NSUInteger httpStatusCode; // ivar: _httpStatusCode
@property (nonatomic) short observedPrimaryInterfaceOnCompletion; // ivar: _observedPrimaryInterfaceOnCompletion
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (nonatomic) short taskState; // ivar: _taskState
@property (nonatomic) BOOL uploaded; // ivar: _uploaded


-(id)debugDescription;
-(id)description;
-(id)init;


@end


#endif