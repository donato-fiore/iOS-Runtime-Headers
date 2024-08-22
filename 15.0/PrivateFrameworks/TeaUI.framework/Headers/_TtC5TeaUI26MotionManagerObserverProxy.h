// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI26MOTIONMANAGEROBSERVERPROXY_H
#define _TTC5TEAUI26MOTIONMANAGEROBSERVERPROXY_H

@class SwiftObject;
@protocol TUMotionManagerObserver;



@interface _TtC5TeaUI26MotionManagerObserverProxy : SwiftObject <TUMotionManagerObserver>

 {
    ? delegate;
}




-(void)motionManager:(id)arg0 didUpdateMotionData:(id)arg1 ;
-(void)motionManager:(id)arg0 motionEnabled:(BOOL)arg1 ;


@end


#endif