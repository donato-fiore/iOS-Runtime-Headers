// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAFEATURESUSAGEREPORTINGTASK_H
#define PHAFEATURESUSAGEREPORTINGTASK_H

@class NSString;
@protocol PHATask;

#import <Foundation/Foundation.h>


@interface PHAFeaturesUsageReportingTask : NSObject <PHATask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (readonly) Class superclass;


+(id)_dateFormatter;
-(BOOL)recordFeatureUsageFromCounts:(id)arg0 forPhotoLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(id)_libraryScopedWorkerFeaturesUsageForLibrary:(id)arg0 error:(*id)arg1 ;
-(id)_libraryScopedWorkerFeaturesUsageURLForPhotoLibrary:(id)arg0 ;


@end


#endif