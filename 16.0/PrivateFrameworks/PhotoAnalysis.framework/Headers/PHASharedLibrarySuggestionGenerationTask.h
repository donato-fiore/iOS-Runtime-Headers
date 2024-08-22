// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASHAREDLIBRARYSUGGESTIONGENERATIONTASK_H
#define PHASHAREDLIBRARYSUGGESTIONGENERATIONTASK_H

@class NSString;
@protocol PHATask;

#import <Foundation/Foundation.h>


@interface PHASharedLibrarySuggestionGenerationTask : NSObject <PHATask>

 {
    short _taskType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger version;


+(BOOL)resetSuggestionsWithGraphManager:(id)arg0 error:(*id)arg1 ;
-(BOOL)currentPlatformIsSupported;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(id)initWithTaskType:(short)arg0 ;
-(void)_sendNotificationWithPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;


@end


#endif