// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSUBMISSIONFILEMSS_H
#define PLSUBMISSIONFILEMSS_H



#import "PLSubmissionFile.h"

@interface PLSubmissionFileMSS : PLSubmissionFile



-(BOOL)copyAndPrepareLog;
-(BOOL)flushMicrostackshots;
-(id)fileExtension;
-(id)fileType;
-(id)getFileList;
-(id)initWithConfig:(id)arg0 ;
-(void)submit;


@end


#endif