// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAHIGHLIGHTENRICHMENTTASK_H
#define PHAHIGHLIGHTENRICHMENTTASK_H



#import "PHAEnrichmentTask.h"

@interface PHAHighlightEnrichmentTask : PHAEnrichmentTask

@property (nonatomic) NSUInteger tailorOptions; // ivar: _tailorOptions


-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(CGFloat)period;


@end


#endif