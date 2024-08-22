// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFSTORAGEANALYTICSCALCULATOR_H
#define PFSTORAGEANALYTICSCALCULATOR_H


#import <Foundation/Foundation.h>


@interface PFStorageAnalyticsCalculator : NSObject {
    ? managedObjectContext;
    ? fileManager;
    ? workQueue;
    ? channel;
    ? analyticsTask;
}




+(id)live;
-(id)init;
-(void)reportStorageUse;


@end


#endif