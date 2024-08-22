// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSUBMISSIONFILE_H
#define PLSUBMISSIONFILE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PLSubmissionConfig.h"

@interface PLSubmissionFile : NSObject

@property (retain) NSString *directory; // ivar: _directory
@property (retain) NSString *fileName; // ivar: _fileName
@property BOOL iCloudUploadEnabled; // ivar: _iCloudUploadEnabled
@property (retain) PLSubmissionConfig *taskingConfig; // ivar: _taskingConfig


-(BOOL)createTagFileWithPath:(id)arg0 ;
-(BOOL)createTagFileWithPath:(id)arg0 withInfo:(id)arg1 ;
-(id)fileExtension;
-(id)filePath;
-(id)fileType;
-(id)initWithConfig:(id)arg0 ;
-(int)submitLogToDAWithBugType:(id)arg0 ;
-(void)cleanupTmpDirectory;
-(void)decorateFile;
-(void)decorateFileAtPath:(id)arg0 ;
-(void)logSubmissionResultToAggdWithErrorType:(int)arg0 withFileType:(id)arg1 withOverrideKeys:(id)arg2 ;
-(void)submit;
-(void)submitLogToiCloudWithCompress:(BOOL)arg0 ;


@end


#endif