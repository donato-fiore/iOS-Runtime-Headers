// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSUBMISSIONFILECE_H
#define PLSUBMISSIONFILECE_H



#import "PLSubmissionFile.h"

@interface PLSubmissionFileCE : PLSubmissionFile



-(BOOL)copyAndPrepareLog;
-(id)fileExtension;
-(id)fileType;
-(id)getCESQLFile;
-(id)initWithConfig:(id)arg0 ;
-(void)submit;


@end


#endif