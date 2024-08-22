// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKBUGSESSION_H
#define FBKBUGSESSION_H

@class NSManagedObject, NSNumber, NSString;


#import "FBKUploadTask.h"

@interface FBKBugSession : NSManagedObject

@property (retain) NSNumber *bytesToUpload;
@property (retain) NSNumber *bytesUploaded;
@property (retain) NSString *deviceIdentifier;
@property (retain) NSString *identifier;
@property NSInteger state;
@property (retain) FBKUploadTask *uploadTask;


+(id)bugSessionWithDEDBugSession:(id)arg0 inContext:(id)arg1 ;
+(id)entityName;
-(BOOL)hasNumberOfBytesToUpload;
-(id)deviceFromManager:(id)arg0 ;


@end


#endif