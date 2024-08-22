// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSUBMISSIONFILEBDC_H
#define PLSUBMISSIONFILEBDC_H



#import "PLSubmissionFile.h"

@interface PLSubmissionFileBDC : PLSubmissionFile



-(BOOL)copyAndPrepareLog;
-(id)fileExtension;
-(id)fileType;
-(id)getBDCPlistFile;
-(id)getEPSQLFile;
-(id)getListOfRequiredBDCFiles;
-(id)initWithConfig:(id)arg0 ;
-(void)submit;


@end


#endif