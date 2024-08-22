// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMICROLOCATIONLOCALIZATION_H
#define ATXMICROLOCATIONLOCALIZATION_H

@class _PASSimpleCoalescingTimer, CLLocationManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXMicrolocationLocalization : NSObject {
    _PASSimpleCoalescingTimer *_coalescingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    CLLocationManager *_locationManager;
}




-(id)initWithLocationManager:(id)arg0 ;
-(void)_triggerMicroLocationLocalization;
-(void)initiateLocalization;


@end


#endif