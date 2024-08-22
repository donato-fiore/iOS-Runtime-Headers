// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAPHOTOSCHALLENGETASK_H
#define PHAPHOTOSCHALLENGETASK_H

@class NSString;
@protocol PHATask;

#import <Foundation/Foundation.h>


@interface PHAPhotosChallengeTask : NSObject <PHATask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger limit; // ivar: _limit
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (nonatomic) NSInteger questionOptions; // ivar: _questionOptions
@property (readonly) Class superclass;


+(id)currentQuestionsKVSDataFromGraphManager:(id)arg0 ;
+(id)facesAndScenesProcessingProgressPercentageDataForPhotoLibrary:(id)arg0 ;
+(void)removeCurrentKVSDataFromGraphManager:(id)arg0 ;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(id)init;


@end


#endif