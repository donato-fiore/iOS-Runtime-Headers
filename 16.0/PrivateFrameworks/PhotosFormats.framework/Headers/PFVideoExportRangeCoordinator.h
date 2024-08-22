// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFVIDEOEXPORTRANGECOORDINATOR_H
#define PFVIDEOEXPORTRANGECOORDINATOR_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PFVideoExportRangeCoordinator : NSObject

@property _NSRange availableRange; // ivar: _availableRange
@property BOOL cancelled; // ivar: _cancelled
@property (retain) NSObject<OS_dispatch_queue> *rangeCoordinatorStateQueue; // ivar: _rangeCoordinatorStateQueue
@property (retain) NSMutableArray *waitingCallers; // ivar: _waitingCallers


-(BOOL)waitForAvailabilityOfRange:(struct _NSRange )arg0 timeout:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(void)cancel;
-(void)updateAvailableRange:(struct _NSRange )arg0 ;


@end


#endif