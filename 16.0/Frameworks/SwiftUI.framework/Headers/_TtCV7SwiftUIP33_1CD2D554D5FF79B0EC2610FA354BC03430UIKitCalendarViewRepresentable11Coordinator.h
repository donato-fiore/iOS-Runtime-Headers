// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV7SWIFTUIP33_1CD2D554D5FF79B0EC2610FA354BC03430UIKITCALENDARVIEWREPRESENTABLE11COORDINATOR_H
#define _TTCV7SWIFTUIP33_1CD2D554D5FF79B0EC2610FA354BC03430UIKITCALENDARVIEWREPRESENTABLE11COORDINATOR_H

@class TtC7SwiftUI23PlatformViewCoordinator;
@protocol UICalendarSelectionMultiDateDelegate;



@interface _TtCV7SwiftUIP33_1CD2D554D5FF79B0EC2610FA354BC03430UIKitCalendarViewRepresentable11Coordinator : TtC7SwiftUI23PlatformViewCoordinator <UICalendarSelectionMultiDateDelegate>

 {
    ? configuration;
}




-(id)init;
-(void)multiDateSelection:(id)arg0 didDeselectDate:(id)arg1 ;
-(void)multiDateSelection:(id)arg0 didSelectDate:(id)arg1 ;


@end


#endif