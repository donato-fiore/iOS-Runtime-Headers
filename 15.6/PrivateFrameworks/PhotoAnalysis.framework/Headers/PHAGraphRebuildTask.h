// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAGRAPHREBUILDTASK_H
#define PHAGRAPHREBUILDTASK_H

@class NSString;
@protocol PHATask;

#import <Foundation/Foundation.h>


@interface PHAGraphRebuildTask : NSObject <PHATask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger memoryCategory; // ivar: _memoryCategory
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useMemoryCategory; // ivar: _useMemoryCategory


-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;


@end


#endif