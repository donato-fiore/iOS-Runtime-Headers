// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMLIBRARYSELECTIONTESTHARNESS_H
#define CAMLIBRARYSELECTIONTESTHARNESS_H



#import "CAMPerformanceTestHarness.h"
#import "CAMLibrarySelectionController.h"

@interface CAMLibrarySelectionTestHarness : CAMPerformanceTestHarness

@property (readonly, nonatomic) CAMLibrarySelectionController *librarySelectionController; // ivar: _librarySelectionController


-(id)init;
-(id)initWithTestName:(id)arg0 ;
-(id)initWithTestName:(id)arg0 librarySelectionController:(id)arg1 ;
-(void)startTesting;


@end


#endif