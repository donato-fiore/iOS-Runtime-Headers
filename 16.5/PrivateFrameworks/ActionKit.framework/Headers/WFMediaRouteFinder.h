// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMEDIAROUTEFINDER_H
#define WFMEDIAROUTEFINDER_H

@class WFDispatchSourceTimer;
@protocol WFMediaRoutePickerObserver;

#import <Foundation/Foundation.h>

#import "WFMediaRoutePicker.h"
#import "WFMediaRouteDescriptor.h"

@interface WFMediaRouteFinder : NSObject <WFMediaRoutePickerObserver>



@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, weak, nonatomic) WFMediaRoutePicker *picker; // ivar: _picker
@property (readonly, nonatomic) WFMediaRouteDescriptor *routeDescriptor; // ivar: _routeDescriptor
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout
@property (readonly, nonatomic) WFDispatchSourceTimer *timer; // ivar: _timer


-(id)initWithPicker:(id)arg0 routeDescriptor:(id)arg1 timeout:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)finishWithMatchingRoute:(id)arg0 error:(id)arg1 ;
-(void)routePickerDidUpdateAvailableRoutes:(id)arg0 ;
-(void)start;


@end


#endif