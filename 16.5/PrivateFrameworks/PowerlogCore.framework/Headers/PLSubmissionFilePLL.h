// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSUBMISSIONFILEPLL_H
#define PLSUBMISSIONFILEPLL_H



#import "PLSubmissionFile.h"

@interface PLSubmissionFilePLL : PLSubmissionFile

@property BOOL isEnergyTasking; // ivar: _isEnergyTasking


-(BOOL)copyAndPrepareLog;
-(BOOL)copyLastArchiveToPath:(id)arg0 ;
-(BOOL)prepareDatabaseAtPath:(id)arg0 ;
-(id)baseCADictionary;
-(id)fileExtension;
-(id)fileType;
-(id)initWithConfig:(id)arg0 ;
-(id)updateSubmissionTagWithConnection:(id)arg0 ;
-(void)emitCopyResult:(BOOL)arg0 ;
-(void)emitDecompressionResult:(BOOL)arg0 ;
-(void)emitFileExists:(BOOL)arg0 ;
-(void)emitPreparationResult:(BOOL)arg0 ;
-(void)generateSubmissionTagForCurrentLog;
-(void)logSubmissionSizeToAnalytics:(NSUInteger)arg0 withUncompressedSize:(NSUInteger)arg1 ;
-(void)submit;


@end


#endif