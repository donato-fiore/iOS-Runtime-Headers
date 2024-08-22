// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFVIDEOEXPORTRANGEWAITINGCALLER_H
#define PFVIDEOEXPORTRANGEWAITINGCALLER_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PFVideoExportRangeWaitingCaller : NSObject

@property BOOL cancelled; // ivar: _cancelled
@property _NSRange requestedRange; // ivar: _requestedRange
@property BOOL requestedRangeIsAvailable; // ivar: _requestedRangeIsAvailable
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore


+(id)waitingCallerWithRequestedRange:(struct _NSRange )arg0 ;
-(BOOL)canResumeForRange:(struct _NSRange )arg0 ;
-(id)init;
-(void)resume;
-(void)waitWithTimeout:(NSUInteger)arg0 ;


@end


#endif