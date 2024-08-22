// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASYNDICATIONTASK_H
#define PHASYNDICATIONTASK_H

@class NSString;
@protocol PHATask;

#import <Foundation/Foundation.h>


@interface PHASyndicationTask : NSObject <PHATask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL performCurationJob; // ivar: _performCurationJob
@property (nonatomic) BOOL performGuestInferenceJob; // ivar: _performGuestInferenceJob
@property (readonly, nonatomic) CGFloat period;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger version;


-(BOOL)currentPlatformIsSupported;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(id)init;


@end


#endif