// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSUBMISSIONFILEPLL_H
#define PLSUBMISSIONFILEPLL_H



#import "PLSubmissionFile.h"

@interface PLSubmissionFilePLL : PLSubmissionFile



-(BOOL)copyAndPrepareLog;
-(id)appResumeTablesToTrim;
-(id)fileExtension;
-(id)fileType;
-(id)initWithConfig:(id)arg0 ;
-(id)updateSubmissionTagWithConnection:(id)arg0 ;
-(void)generateSubmissionTagForCurrentLog;
-(void)logSubmissionSizeToAnalytics:(NSUInteger)arg0 withUncompressedSize:(NSUInteger)arg1 ;
-(void)prepareDatabaseAtPath:(id)arg0 ;
-(void)submit;
-(void)trimTablesForAppResumeTelemetry:(id)arg0 ;


@end


#endif