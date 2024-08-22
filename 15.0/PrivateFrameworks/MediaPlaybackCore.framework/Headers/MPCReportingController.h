// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCREPORTINGCONTROLLER_H
#define MPCREPORTINGCONTROLLER_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MPCReportingController.h"

@interface MPCReportingController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_childReportingControllers;
    MPCReportingController *_parentReportingController;
}


@property (readonly, copy, nonatomic) NSArray *childReportingControllers;
@property (weak, nonatomic) MPCReportingController *parentReportingController;


-(id)init;
-(void)_recordReportingEvents:(id)arg0 ;
-(void)addChildReportingController:(id)arg0 ;
-(void)recordReportingEvents:(id)arg0 ;
-(void)removeChildReportingController:(id)arg0 ;


@end


#endif